#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
	int N, answer=2;
	cin >> N;
	for (int i = 1; i <= N; i++){
		answer = answer*2-1;
	}
	cout << answer*answer;
	return 0;
}