#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        unordered_set<int> s(a.begin(),a.end());
        
        cout << s.size() << endl;
    }
    return 0;
}