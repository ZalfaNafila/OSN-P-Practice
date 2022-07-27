//ZalfaNafila C++
//https://codeforces.com/problemset/problem/894/A

#include <bits/stdc++.h>
using namespace std;
#define hi ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#include <cctype>

int main(){
	hi
	int total = 0;
	string sub = "QAQ";
    string s;
    cin >> s;
    int sz = s.size();
    for(int i = 0; i<sz; i++){
        if(s[i] == 'A'){
            int left = 0,right = 0;
            for(int j = 0; j<i; j++){
                if(s[j] == 'Q'){
                    left++;
                }
            }
            for(int k = i+1; k<sz; k++){
                if(s[k] == 'Q'){
                    right++;
                }
            }
        total+=left*right;
        }

    }
        cout << total << endl;
}

