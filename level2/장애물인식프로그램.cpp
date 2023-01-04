#include<bits/stdc++.h>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int N;
char mapp[26][26];
int map_flag[26][26];
vector <int> ans;

int bfs(int x, int y){
    int cnt = 1;
    queue<pair<int, int> > q;
    q.push({x, y});
    map_flag[x][y] = 1;
    while (!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i=0; i<4; i++){
            int nx = x+dx[i]; int ny = y+dy[i];
            if (nx>-1 and nx<N and ny>-1 and ny<N){
                if(mapp[nx][ny] == '1' and map_flag[nx][ny]==0){
                    q.push({nx,ny});
                    map_flag[nx][ny] = 1;
                    cnt+=1;
                }
            }
        }
    }
    return cnt;
}

int main(int argc, char** argv)
{
    cin >> N;
    for (int i=0; i<N; i++){
        for (int j=0; j<N;j++){
            char ch;
            cin >> ch;
            mapp[i][j] = ch;
        }
    }
    for (int i=0; i<N; i++){
        for (int j=0; j<N;j++){
            if (map_flag[i][j] == 0 and mapp[i][j] == '1')
            	ans.push_back(bfs(i, j));
        }
    }
	cout << ans.size()<<endl;
    sort(ans.begin(),ans.end());
	for (auto i : ans)
		cout<<i<<endl;
    return 0;
}