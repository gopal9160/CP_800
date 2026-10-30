#include<bits/stdc++.h>
using namespace std;
bool gops(string s, char a,char b){
    int c1 = 0, c2 = 0;
    int idx1 = -1, idx2 = -1;
    for(int i = 1; i < s.size(); i++){
        if(s[i]==a  && s[i-1] == b){
            idx1 = i-1;
            idx2 = i;
            c1++;
            break;
        }
    }
    if(idx1==-1) return false;
    for(int i = idx2+1; i < s.size()-1; i++){
        if(s[i]==a && s[i+1]==b){
            c2++;
            break;
        }
    }
    if(c1==1 && c2==1){
        return true;
    }else{
        return false;
    }
}
int main(){
    string s;
    cin >> s;
    if(gops(s,'A','B') || gops(s,'B','A')){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}