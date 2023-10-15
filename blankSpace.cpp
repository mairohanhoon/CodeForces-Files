#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int res = 0;
        int x = 1;
        int i=0;
        while(i<n){
            if(arr[i] == 0){
                x = 1;
                while(arr[i] == arr[i+x] && i+x < n){
                    x++;
                }
                i+=x;
                res = max(res, x);
            }
            else{
                i++;
            }
        }
        cout << res << endl;
    }

    return 0;
}