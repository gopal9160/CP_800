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
        int neg = 0, pos = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == -1){
                neg++;
            }else{
                pos++;
            }
        }
        if(pos >= neg){
            if(neg % 2==0){
                cout << 0 << endl;
            }else{
                cout << 1 << endl;
            }
        }else{
            int diff = neg - pos;
            int op = diff / 2;
            if(diff % 2 == 1){
                op++;
            }
            neg = neg - op;
            if(neg % 2==0){
                cout << op << endl;
            }else{
                op += 1;
                cout << op << endl;
            }

        }
    }
    return 0;
}