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
        vector<int> ans = a;
        sort(ans.begin(),ans.end());
        if(ans==a){
            cout << "YES\n";
            continue;
        }
        bool can = false;
        for(int i = 1; i < n-1; i++){
            if(a[i] > a[i-1] && a[i] > a[i+1]){
                if(a[i+1] < a[i-1]){
                    can = true;
                }else{
                    swap(a[i],a[i+1]);
                }
            }else if(a[i] < a[i+1] || a[i] < a[i-1]){
                can = true;
            }
        }
        if(can){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
        
    }
    return 0;
}