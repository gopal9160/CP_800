#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        bool flag = true;
        for(int i = 1; i < n; i++){
            if(a[i] < a[i-1]){
                flag = 0;
            }
        }
        if(flag){
            cout << n << endl;
        }else{
            cout << 1 << endl;
        }
    }
    return 0;
}