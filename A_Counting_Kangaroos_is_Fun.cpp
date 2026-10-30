#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int ans = 0;
    int i = 0;
    int j = n/2;
    while(i < n/2 && j < n){
        if(a[i]*2 <= a[j]){
            ans++;
            i++;
            j++;
        }else{
            j++;
        }
    }
    cout << n-ans << endl;
    return 0;
}