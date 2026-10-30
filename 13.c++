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
        vector<int> b,c;
        int mx = *max_element(a.begin(),a.end());
        
        for(auto &x : a) {
            if(x != mx){
                b.push_back(x);
            }else{
                c.push_back(x);
            }
        }
        if(c.size()==0 || b.size()==0){
            cout << "-1" << endl;
            continue;
        }

        cout << b.size() << " " << c.size() << endl;

        for(int i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
        cout << endl;
        for(int i = 0; i < c.size(); i++){
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}