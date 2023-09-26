#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int res[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int count = 1;
        for(int i=0; i<n; i++){
            if(arr[i] == count){
                count++;
            }
            res[i] = count;
            count++;
        }
        cout << res[n-1] << endl;
    }

    return 0;
}