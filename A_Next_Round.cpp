#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int ans = 0;
    int score = a[k - 1];  

    for(int i = 0; i < n; i++){
        if(a[i] >= score && a[i] > 0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}