#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    string res1 = "";
    string res2 = "";
    res1+=s1[0];
    for(int i = 1; i < s1.size(); i++){
        if(s1[i] == '#'){
            res1.pop_back();
        }else{
            res1 += s1[i];
        }
    }
    res2 += s2[0];
    for(int i = 1; i < s2.size(); i++){
        if(s2[i] == '#'){
            res2.pop_back();
        }else{
            res2 += s2[i];
        }
    }
    if(res1==res2){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}