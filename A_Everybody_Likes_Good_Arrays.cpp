#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int res = 0;
        for(int i = 1; i < n; i++){
            if(a[i-1] % 2 != a[i] % 2){
                continue;
            }else{
                int num = 0;
                if(a[i] % 2==0){
                    num = 2;
                }else{
                    num = 1;
                }
                a[i] = num;
                a[i-1] = 0;
                res++;
            }
        }
        cout << res << endl;

    }
    return 0;
}