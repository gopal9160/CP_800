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
        for(int i = 0; i < n; i++){
            int cnt = 0,cnt1 = 0;
            for(int j = i+1; j < n; j++){
                if(a[i] > a[j]){
                    cnt++;
                }
                if(a[i] < a[j]){
                    cnt1++;
                }
            }
            cout << max(cnt,cnt1) << " ";
        }
        cout << endl;
    }
    return 0;
}