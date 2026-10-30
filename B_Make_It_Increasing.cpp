#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int cnt = 0;
        bool flag = 1;
        for(int i = n-1; i > 0; i--){
            while(a[i-1] >= a[i]){
                if(a[i-1]==0){
                    flag = 0;
                    break;
                }
                a[i-1] = a[i-1] / 2;
                cnt++;
            }
        }
        if(flag){
            cout << cnt << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}