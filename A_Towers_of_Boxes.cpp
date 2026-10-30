#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m ,d;
        cin >> n >> m >> d;
        int ans = 1 + d / m;
        cout << (n + ans - 1) / ans << endl;
    }
    return 0;
}