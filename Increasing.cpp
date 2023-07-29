#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x[n];
        for(int i=0; i<n; i++){
            cin >> x[i];
        }
        sort(x, x+n);
        int i=0;
        int check = 1;
        while(i<n-1){
            if(x[i] == x[i+1]){
                check = 0;
                break;
            }
            else{
                i++;
            }
        }
        if(check == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}