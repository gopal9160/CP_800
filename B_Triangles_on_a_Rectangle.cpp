#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()
int dist(int x, int y, int a, int b){
    double dis = sqrt((a-x)*(a-x) + (b-x)*(b-x));
    return dis;
}
void solve() {
    int w,h;
    cin >> w >> h;
    ll area = INT_MIN;
    for(int i = 0; i < 4; i++){
        ll k,f,l;
        cin >> k;
        for(int j = 0; j < k; j++){
            ll x;
            cin >> x;
            if(j==0){
                f = x;
            }
            if(j==k-1){
                l = x;
            }
        }
        ll b = l - f;
        if(i<=1){
           area = max(area,b*h);
        }else{
           area = max(area,b*w);
        }
    }
    cout << area << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}