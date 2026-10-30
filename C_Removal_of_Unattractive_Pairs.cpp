#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> a(26);
        for(int i = 0; i < n; i++){
            a[s[i] - 'a']++;
        }
        int cnt = *max_element(a.begin(),a.end());
        int ch = n - cnt;
        if(cnt <= n/2){
            if(n % 2 == 0){
                cout << 0 << endl;
            }else{
                cout << 1 << endl;
            }
            continue;
        }
        cout << cnt - ch << endl;
    }
    return 0;
}