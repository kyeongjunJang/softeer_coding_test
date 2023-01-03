#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{	
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string start;
	string end;
	int sum;
	int w_time;
	for(int i =0; i<5; i++){
		cin >> start >> end;

		int start_h = stoi(start.substr(0,2));
		int start_m = stoi(start.substr(3,2));
		int end_h = stoi(end.substr(0,2));
		int end_m = stoi(end.substr(3,2));
		
		w_time = (end_h - start_h)*60 +(end_m - start_m);
		sum+=w_time;
	}
	cout << sum <<endl;
	return 0;
}