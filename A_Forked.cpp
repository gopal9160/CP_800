#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,x_k,y_k,x_q,y_q;
        cin >> a >> b;
        cin >> x_k >> y_k;
        cin >> x_q >> y_q;

        int dx[4] = {1,-1,1,-1}, dy[4] = {-1,-1,1,1};

        set<pair<int,int>> k,q;
        for(int i = 0; i < 4;i++){
            k.insert({x_k + dx[i]*a, y_k + dy[i] * b});
            k.insert({x_k + dx[i]*b, y_k + dy[i] * a});
            q.insert({x_q + dx[i]*a, y_q + dy[i] * b});
            q.insert({x_q + dx[i]*b, y_q + dy[i] * a});
        }
        int res = 0;
        for(auto it : q){
            if(k.find(it)!=k.end()){
                res++;
            }
        }
        cout << res << endl;
    }
}