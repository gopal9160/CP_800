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
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        bool flag = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i-1]){
                flag = 0;
                break;
            }
        }
        if(flag){
            for(int x : a){
                cout << x << " ";
            }
            cout << endl;
        }else{
            cout << -1 << endl;
        }

    }
    return 0;
}