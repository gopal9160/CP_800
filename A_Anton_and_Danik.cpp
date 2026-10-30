#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ant = 0, dan = 0;
    for(char c : s){
        if(c == 'A'){
            ant++;
        }else{
            dan++;
        }
    }
    if(ant > dan){
        cout << "Anton\n";
    }else if(dan > ant){
        cout << "Danik\n";
    }else{
        cout << "Friendship\n";
    }
    return 0;
}