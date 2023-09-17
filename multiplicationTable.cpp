#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    long long x;
    cin >> n >> x;
    long long mat[n][n];
    map<long long, int> hashh;
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            mat[i][j] = (i+1) * (j+1);
            hashh[mat[i][j]]++; 
        }
    }
    int count = 0;
    for(auto it:hashh){
        if(it.first == x){
            count = it.second;
        }
    }
    cout << count << endl;

    return 0;
}