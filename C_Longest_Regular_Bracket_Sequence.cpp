#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    stack<int> st;
    st.push(-1);
    int maxi = 0, c = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            st.push(i);
        }else{
            st.pop();
            if(st.empty()){
                st.push(i);
            }else{
                int len = i - st.top();
                if(len > maxi){
                    maxi = len;
                    c = 1;
                }else if(len == maxi){
                    c++;
                }
            }
        }
    }
    if(maxi == 0){
        cout << 0 << " " << 1 << endl;
    }else{
        cout << maxi << " " << c << endl;
    }
    return 0;
}