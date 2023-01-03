#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
	string gear("00000000"); //string 8글자로 초기화

	for (int i=0;i<8;i++)
		cin >> gear[i];

	if (gear=="12345678") 
		cout << "ascending";
	else if (gear=="87654321") 
		cout << "descending";
	else 
		cout << "mixed";

	return 0;
}