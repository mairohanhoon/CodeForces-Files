#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int check;
        if(a[0] == a[1]){
            check = a[0];
        }
        else if(a[0] == a[2]){
            check = a[0];
        }
        else if(a[1] == a[2]){
            check = a[1];
        }
        int temp = 0;

        for(int i=0; i<n; i++){
            if(a[i] != check){
                temp = i+1;
                break;
            }
        }
        cout << temp << endl;
    }

    return 0;
}