#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t, a, b;
	cin >> t ;
	for(int i=1;i<=t;i++){
		cin >> a >>b;
		cout << "Case #"<<i<<": "<<a+b<<endl;
	}

	return 0;
}