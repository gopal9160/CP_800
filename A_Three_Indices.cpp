#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &it : a) cin >> it;
        bool found = false;
        for(int i = 1; i < n-1; i++){
            if(a[i-1] < a[i] && a[i] > a[i+1]){
                found = true;
                cout << "YES" << endl;
                cout << i << " " << i+1 << " " << i+2 << endl;
            }
            if(found) break;
        }
        if(found == false) cout << "NO" << endl;
    }
    return 0;
}