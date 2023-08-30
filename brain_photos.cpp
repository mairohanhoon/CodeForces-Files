#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    char arr[n][m];

    for(int i=0;i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    int check = 0;
    for(int i=0;i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y'){
                check = 1;
            }
        }
    }
    if(check == 1){
        cout << "#Color" << endl;
    }
    else{
        cout << "#Black&White" << endl;
    }

    return 0;
}