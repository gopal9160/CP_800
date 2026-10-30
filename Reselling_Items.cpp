#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    vector<int> a(n);
	    for(int i = 0; i < n; i++){
	        cin >> a[i];
	    }
	    sort(a.begin(),a.end() );
	    int profit = 0;
	    for(int i = n-1; i >= 0; i--){
	        if(a[i] > 5 && k > 0){
	            profit += (a[i] - 5);
	            k--;
	        }
	        else{
	            if(k==0 && a[i] > 10)
	                profit += a[i] - 10;
	        }
	    }
	    std::cout << profit << std::endl;
	}
}
