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
        int i = 0, j = n-1;
        int res = 0;
        for(int i = 0, j = n-1; i<j; i++){
            if(a[i] == 1){
                while(j > i && a[j] != 0) j--;
                if(j==i) break;
                swap(a[i],a[j]);
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}