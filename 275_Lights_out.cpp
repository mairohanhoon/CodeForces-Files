#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> v(3, vector<int>(3));
    vector<vector<int>> a(3, vector<int>(3));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> v[i][j];
            a[i][j] = 1;
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(v[i][j]%2 == 1){
                a[i][j] = !a[i][j];
                if(i-1 >= 0) a[i-1][j] = !a[i-1][j];
                if(i+1 < 3) a[i+1][j] = !a[i+1][j];
                if(j-1 >= 0) a[i][j-1] = !a[i][j-1];
                if(j+1 < 3) a[i][j+1] = !a[i][j+1];
            }
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}