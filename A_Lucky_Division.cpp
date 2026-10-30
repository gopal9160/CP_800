#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a = {4,7,47,74,444,447,474,744,777,774,747,477};
    bool flag = 0;
    for(int i = 0; i < a.size(); i++){
        if(n % a[i] == 0){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}