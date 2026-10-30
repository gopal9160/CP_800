#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll a,n,d1,d2;
        cin >> a >> n >> d1 >> d2;
        string s = to_string(a);
        ll small = min(d1,d2);
        ll big = max(d1,d2);
        vector<string> b;
        int i = 0;
        for(i = 0; i < s.size(); i++){
            string s1 = "";
            if(s[i] - '0' != small && s[i] - '0' == big){
                break;
            }
        }

        string t = s;
        if(i == s.size()){
            cout << 0 << endl;
        }else{
            for(int j = i; j < n; j++){
                t[i] = small + '0';
                b.push_back(t);

                t[i] = big + '0';
                b.push_back(t);
            }
        }
        
        ll ans = LLONG_MAX;
        for(int i = 0; i < b.size(); i++){
            ll num = stoll(b[i]);
            ans = min(ans,abs(num-a));
        }
        cout << ans << endl;
    }
    return 0;
}