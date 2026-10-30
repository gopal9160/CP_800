#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        if(n==1 || a==b && b==n){
            cout << "Yes\n";
            continue;
        }
        if(n==2 || n==3){
            cout << "No\n";
            continue;
        }
        int diff = n - (a+b);
        if(diff>=2){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}