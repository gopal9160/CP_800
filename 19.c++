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
        int len = 0,res = INT_MIN;
        int zero = 0;
        if(a[0]==0) zero++;

        for(int i = 1; i < n; i++){
            if(a[i]==0) zero++;
            if(a[i-1]==0 && a[i]==0){
                len++;
                res = max(res,len);
            }else{
                len = 0;
            }
        }
        if(zero == 0){
            cout << 0 << endl;
        }
        else if(zero >= 1 && res==INT_MIN){
            cout << 1 << endl;
        }else{
            cout << res + 1 << endl;
        }
    }
    return 0;
}