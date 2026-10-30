#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int res = 0;
        int max_num = 0;
        for(int i = 0; i < n; i++){
            if(a[i] >= max_num){
                res++;
                max_num = a[i];
            }
        }
        
        cout << res << endl;
    }
}