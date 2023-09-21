#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int arr[4];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        int a = max(arr[0], arr[1]);
        int b = max(arr[2], arr[3]);
        sort(arr, arr+4);
        if(a==arr[3] && b==arr[2]){
            cout << "YES" << endl;
        }
        else if(a==arr[2] && b==arr[3]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}