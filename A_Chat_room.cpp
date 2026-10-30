#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string s1 = "hello";
    int n = s.size();
    int j = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == s1[j]){
            j++;
        }
    }
    if(j == 5){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
} 