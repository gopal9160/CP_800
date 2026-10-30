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
        for(int i = 0; i < n; i++){
            if(a[i] == n){
                swap(a[i],a[0]);
            }
        }
        for(int x : a) cout << x << " ";
        cout << endl;
    }
    return 0;
}