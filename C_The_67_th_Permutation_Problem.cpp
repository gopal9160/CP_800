#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int l = 1;
        int r = 3*n;
        for(int i = 0; i < n; i++){
            cout << l << " " << r << " " << r-1 << " ";
            l++;
            r -= 2;
        }
        cout << endl;
    }
    return 0;
}