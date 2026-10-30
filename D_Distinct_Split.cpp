#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> pre(n), suff(n);
        unordered_set<char> st;
        for(int i = 0; i < n; i++){
            st.insert(s[i]);
            pre[i] = (int)st.size();
        }
        st.clear();
        for(int i = n-1; i >= 0; i--){
            st.insert(s[i]);
            suff[i] = (int)st.size();
        }
        int maxi = 0;
        for(int i = 0; i < n-1; i++){
            maxi = max(maxi, pre[i] + suff[i+1]);
        }
        cout << maxi << endl;

    }
    return 0;
}