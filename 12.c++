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
        vector<int> res;
        res.push_back(a[0]);

        for(int i = 1; i < n; i++){
            if(a[i] >= a[i-1]){
                res.push_back(a[i]);
            }else{
                res.push_back(a[i]);
                res.push_back(a[i]);
            }
        }
        cout << res.size() << endl;
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl ;
    }
    return 0;
}