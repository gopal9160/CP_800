#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
        int ans = 0;
	    for(int i = 1; i < n; i++){
            if(i % 2==0 && i % 5 !=0){
                ans = i;
            }
            if(i % 5 == 0 && i % 2!=0){
                ans = i;
            }
        }
        int m = 0;
	    for(int i = n; i < 2*n; i++){
            if(i % 5==0 && i % 2!=0){
                m = i;
                break;
            }
            if(i % 5 != 0 && i % 2==0){
                m = i;
                break;
            }
        }
        int x = min(abs(n-ans),abs(n-m));
        cout << x << endl;
	}

}
