#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int i = 0, j = n-1;
    int x = -1;
    while(i <= j){
        if(a[i]==a[j]){
            i++;
            j--;
        }else{
            x = a[j];
            break;
        }
    }
    if(x==-1){
        cout << "YES" << endl;
        return;
    }
    bool flag = 1;
    while(i <= j){
        if(a[i]==a[j]){
            i++;
            j--;
        }else{
            if(a[i]==x){
                i++;
            }else if(a[j]==x){
                j--;
            }else{
                flag = 0;
                break;
            }
        }
    }
    if(flag){
        cout << "YES" << endl;
        return;
    }
    i = 0, j = n-1;
    while(i <= j){
        if(a[i]==a[j]){
            i++;
            j--;
        }else{
            x = a[i];
            break;
        }
    }
    bool flag1 = 1;
    while(i <= j){
        if(a[i]==a[j]){
            i++;
            j--;
        }else{
            if(a[i]==x){
                i++;
            }else if(a[j]==x){
                j--;
            }else{
                flag1 = 0;
                break;
            }
        }
    }
    if(flag1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
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