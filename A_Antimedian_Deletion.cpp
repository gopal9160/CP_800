#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        if(n<3){
            for(int i = 0; i < n; i++){
                cout << n << " ";
            }
            cout << endl;
            continue;
        }
        for(int i = 0; i < n; i++){
            cout << 2 << " ";
        }
        cout << endl;
    }
    return 0;
}