#include<bits/stdc++.h>
using namespace std;

int main(){

        int n;
        cin >> n;
        int arr[n];
        int res[n] = {0};
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=0; i<n; i++){
            res[arr[i]-1] = i+1;
        }
        for(int i=0; i<n; i++){
            cout << res[i] << " ";
        }
        cout << endl;

    return 0;
}