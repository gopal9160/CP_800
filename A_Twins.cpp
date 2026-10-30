#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int sum = accumulate(a.begin(), a.end(), 0);
    sort(a.begin(), a.end());
    int need = 0;
    int coins = 0;
    for(int i = n-1; i >= 0; i--){
        if(need > sum/2){
            break;
        }else{
            need += a[i];
            coins++;
        }
    }
    cout << coins << endl;
    return 0;
}