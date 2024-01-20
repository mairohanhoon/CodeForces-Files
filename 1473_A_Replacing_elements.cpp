#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, d;
        cin >> n >> d;
        vector<int> arr(n);
        int check = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i] > d){
                check = 1;
            }
        }
        if(check == 0){
            cout << "YES" << endl;
            continue;
        }
        sort(arr.begin(), arr.end());
        if(arr[0]+arr[1] <= d){
            cout << "YES" << endl;
        } 
        else{
            cout << "NO"<< endl;
        } 
    }

    return 0;
}