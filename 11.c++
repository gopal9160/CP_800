#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    int mini;
    cin >> mini; 
    for(int i = 1; i < n; i++){
        int a;
        cin >> a;
        mini = min(abs(a),abs(mini));
    }
    cout << abs(mini) << endl;
    return 0;
}