#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n),nge(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    stack<int> st;
    for(int i = n-1; i >= 0; i--){
        while(!st.empty() && st.top() <= a[i]){
            st.pop();
        }
        if(st.empty()){
            nge[i] = -1;
        }else{
            nge[i] = st.top();
        }
        st.push(a[i]);
    }
    for(int x:nge) cout << x << " ";
    return 0;
}