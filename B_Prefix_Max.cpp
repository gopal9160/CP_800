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
        int mx = INT_MIN;
        for(int &x : a) mx = max(mx,x);
        cout << n*mx << endl;
    }
    return 0;
}