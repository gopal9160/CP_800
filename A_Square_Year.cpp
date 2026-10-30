#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int x = stoi(s);
        int r = sqrt(x);
        
        if(r * r == x){
            cout << 0 << " " << r << endl;
        }else{
            cout << -1 << endl;
        }
    }
}