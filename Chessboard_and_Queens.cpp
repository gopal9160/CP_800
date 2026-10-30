#include<bits/stdc++.h>
using namespace std;
vector<vector<char>> a(8,vector<char>(8));
bool isthere(int row, int col){
    for(int k = 0; k < 8; k++){
        if(a[row][k] == 'Q' || a[k][col] == 'Q') return false;


        if(row+k < 8 && col+k < 8){
            if(a[row+k][col+k] == 'Q') return false;
        }
        if(row+k < 8 && col-k >= 0){
            if(a[row+k][col-k] == 'Q') return false;
        }
        if(row-k >= 0 && col+k < 8){
            if(a[row-k][col+k] == 'Q') return false;
        }
        if(row-k >= 0 && col-k >= 0){
            if(a[row-k][col-k] == 'Q') return false;
        }
    }
    return true;
}
void bt(int idx,int &ans){
    if(idx == 8){
        ans++;
        return;
    }
    for(int i = 0; i < 8; i++){
        if(a[idx][i]=='*') continue;
        if(isthere(idx,i)){
            a[idx][i] = 'Q';
            bt(idx+1,ans);
            a[idx][i] = '.';
        }
    }
}
int main(){
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> a[i][j];
        }
    }
    int ans = 0;
    bt(0,ans);
    cout << ans << endl;
    return 0;
}