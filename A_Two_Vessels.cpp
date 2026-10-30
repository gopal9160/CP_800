#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a , b , c;
        cin >> a >> b >> c;
        int diff = abs(a-b);
        int moves = 0;
        int rem = diff % (2*c);
        if(rem != 0){
            moves++;
        }
        moves += diff / (2*c);
        cout << moves << endl;
    }
    return 0;
}