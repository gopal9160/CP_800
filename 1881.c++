#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        string x , s;
        cin >> n >> m >> x >> s;
        int cnt = 0;
        while(x.size() < s.size()){
            x += x;
            cnt++;
        }
        if(x.find(s)!=string::npos){
            cout << cnt << endl;
            continue;
        }
        x += x;
        cnt++;
        
        if(x.find(s)!=string::npos){
            cout << cnt << endl;
            continue;
        }
        x += x;
        cnt++;

        if(x.find(s)!=string::npos){
            cout << cnt << endl;
            continue;
        }else{
            cout << "-1" << endl;
        }

    }
    return 0;
}