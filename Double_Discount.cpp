#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++){
            v.push_back({b[i],a[i]});
        }
        sort(v.begin(),v.end());
        int taste = 0;
         for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int mx = max(v[i].second, v[j].second);
                int mn = min(v[i].second, v[j].second);
                int discount = min(100, mx / 2);
                int cost = mn + (mx - discount);
                if(cost <= k){
                    taste = max(taste,v[i].first + v[j].first);
                }
            }
        }
        cout << taste << endl;
    }
}
