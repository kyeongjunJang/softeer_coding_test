#include<bits/stdc++.h>
using namespace std;

int N,M;

int main(int argc, char** argv)
{
    cin >> N >> M;
    map<string, vector<int>> room_list;
    for (int i=0;i<N;i++){
        string room;
        cin >> room;
        room_list.insert({room,{9,10,11,12,13,14,15,16,17}});
    }
    for (int i=0;i<M;i++){
        string r;
        int s, e;
        cin >> r >> s >> e;
        for (int k=s;k<e;k++)
            room_list[r].erase(remove(room_list[r].begin(), room_list[r].end(), k),room_list[r].end());
    }
    for (auto iter=room_list.begin(); iter!=room_list.end(); iter++){
        if (iter!=room_list.begin())
            cout << "-----" << endl;
        cout << "Room " << iter->first <<":"<<endl;
        if (iter->second.size() ==0){
            cout << "Not available"<<endl;
        }
        else {
            vector<pair<int,int>> avail;
            int prev = iter->second[0];
            int start = iter->second[0];
            int end = iter->second[iter->second.size()]+1;
            int cnt = 0;
            for (int i = 1; i <= iter->second.size(); i++) {
                int now = iter->second[i];
                if (now - prev == 1){
                    prev = iter->second[i];
                    continue;
                }
                else
                    end = prev + 1;
//                    start, end 저장
                    avail.push_back({start, end});
                start = now;
                cnt += 1;
                prev = iter->second[i];
            }
            cout << cnt << " available:" << endl;
            for(auto i: avail){
                cout << setfill('0') << setw(2) << i.first << "-";
                cout << setfill('0') << setw(2) << i.second << endl;
            }
        }
    }

    return 0;
}