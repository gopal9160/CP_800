#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    string s1 = "WUB";
    for(int i = 0; i < n;){
        if(s.substr(i,3) == "WUB"){
            cout << ' ';
            while(s.substr(i,3) == "WUB"){
                i+=3;
            }
        }else{
            cout << s[i];
            i++;
        }
    }
    return 0;
}