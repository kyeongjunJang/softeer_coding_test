#include<bits/stdc++.h>
using namespace std;

map<char,string> number = {{'0',"1011111"},
{'1',"0000101"},
{'2',"1110110"},
{'3',"1110101"},
{'4',"0101101"},
{'5',"1111001"},
{'6',"1111011"},
{'7',"1001101"},
{'8',"1111111"},
{'9',"1111101"},
{'_',"0000000"}};

int main(int argc, char** argv)
{
	int T;
	cin >> T;
    
	for (int i=0;i<T;i++){
        string first, second;
		cin >> first >> second;
		int first_blank_cnt = 5-first.size();
        int second_blank_cnt = 5-second.size();
        string blank = "_";
        for (int i = 0;i<first_blank_cnt;i++)
            first = blank + first;
        for (int i = 0;i<second_blank_cnt;i++)
            second = blank + second;
        int cnt = 0;
        for (int i = 0;i<5;i++){
            if (first[i] != second[i]){
                for (int j=0;j<7;j++){
                    if (number[first[i]][j] != number[second[i]][j]){
                        cnt+=1;
                    }
                }
                
            }
        }
        cout << cnt<<endl;

	}
	return 0;
}