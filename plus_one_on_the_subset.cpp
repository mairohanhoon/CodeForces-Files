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
        int maxxi = INT_MIN;
        int minni = INT_MAX;
        for(int i=0; i<n; i++){
            if(arr[i] > maxxi){
                maxxi = arr[i];
            }
            if(arr[i] < minni){
                minni = arr[i];
            }
        }
        cout << maxxi - minni << endl;
    }

    return 0;
}