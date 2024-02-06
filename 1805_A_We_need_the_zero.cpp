#include<bits/stdc++.h>
using namespace std;

int main(){

     int t;
     cin >> t;
     while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int x = 0;
        int check = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            check = (check ^ arr[i]);
        } 
        if(check == 0){
            cout << 0 << endl;
        }
        else if(n & 1){
            cout << check <<endl;
        }
        else{
            cout << -1 << endl;
        }
     }

    return 0;
}