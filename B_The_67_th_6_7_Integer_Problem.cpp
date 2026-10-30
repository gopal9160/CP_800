#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> a(7);
        for(int i = 0; i < 7; i++){
            cin >> a[i];
        }
        int sum = 0;
        sort(a.begin(),a.end());
        for(int i = 0; i < 6; i++){
            sum +=  a[i];
        }
        cout << a[6] - sum << endl;
    }
    return 0;
}