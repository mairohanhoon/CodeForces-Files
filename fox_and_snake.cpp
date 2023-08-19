#include<bits/stdc++.h>
using namespace std;

int main(){
    char dot = '.';
    char hash = '#';
    int n, m;
    cin >> n >> m;
    int check = 0;
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            for(int k=0; k<m; k++){
                cout << hash;
            }
            cout << endl;
        }
        else{
            if(check == 0){
                for(int k=0; k<m-1; k++){
                    cout << dot;
                }
                cout << hash;
                cout << endl;
                check = 1;
            }
            else{
                cout << hash;
                for(int k=0; k<m-1; k++){
                    cout << dot;
                }
                check = 0;
                cout << endl;
            }
        }
    }
}