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
        int ans = 0;
        int mini = *min_element(a.begin(),a.end());
        int maxi = *max_element(a.begin(),a.end());
        ans = (maxi-mini+1)/2;
        cout << ans << endl;
    }
    return 0;
}