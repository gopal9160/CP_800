#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        vector<int> b(n);
        for(int &x : a) cin >> x;
        for(int &y : b) cin >> y;
        
        //--> solution:-
        vector<int> res;
        for(int i = n-1; i >= 0; i--){
            int maxVal = *max_element(b.begin(), b.end());
            
        }
    }
    return 0;
}