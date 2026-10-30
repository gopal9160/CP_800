// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         long long n;
//         cin >> n;
//         if(n < 4 || n % 2==1){
//             cout << -1 << endl;
//             continue;
//         }
//         long long  min_bus = ceil(n/6.0);
//         cout << min_bus << " " << n/4 << endl;

//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double  radi = n * 1.0 / 2.0;
    double  area = M_PI * radi * radi;
    cout << fixed << setprecision(7) << area << endl;
    return 0;
}