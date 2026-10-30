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
        int one = 0, two = 0, zero = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 1) one++;
            else if(a[i] == 0) zero++;
            else two++; 
        }
        int ans = 0;
        int pair = min(one,two);
        ans += pair;
        one -= pair;
        two -= pair;
        ans += one/3;
        ans += two/3;

        cout << ans+zero << endl;
    }
}