#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x ,y;
        cin >> x >> y;
        int diff = abs(x-y);
        if(diff==0){
            cout << 1 << endl;
        }else{
            int ans1 = 0;
            for(int i = 1; i <= diff; i++){
                if(diff % i==0){
                    ans1++;
                }
            }
            cout << ans1 << endl;
        }
        for(int i = 0; i < x; i++){
            cout << 1 << " ";
        }
        for(int i = 0; i < y; i++){
            cout << -1 << " ";
        }
        cout << endl;
    }
    return 0;
}