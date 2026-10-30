#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<vector<long long>> a(n);
        for(int i = 0; i < n; i++){
            long long m;
            cin >> m;
            a[i].resize(m);
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
            sort(a[i].begin(),a[i].end());
        }

        long long sum = 0;
        long long min_f = LLONG_MAX;
        long long min_s = LLONG_MAX;
        for(int i = 0; i < n; i++){
            sum += a[i][1];
            min_f = min(a[i][0],min_f);
            min_s = min(a[i][1],min_s);
        }
        sum += min_f;
        sum -= min_s;
        cout << sum << endl;
    }
}