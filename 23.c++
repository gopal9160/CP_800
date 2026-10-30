#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(a[i]==2){
                cnt++;
            }
        }
        if(cnt==0){
            cout << 1 << endl;
            continue;
        }

        int cnt1 = 0, res  = -1;
        for(int i = 0; i < n; i ++){
            if(a[i]==2){
                cnt1++;
                cnt--;
            }
            if(cnt1==cnt){
                res = i;
                break;
            }
        }
        if(res==-1){
            cout << -1 <<  endl;
        }else{
            cout << res + 1 << endl;
        }
    }
    return 0;
}