#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int pro = 1;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        if(arr[0] == 0){
            for(int i=1; i<n; i++){
                pro*= arr[i];
            }
             cout << pro << endl;
        }
        else{
            arr[n-1]++;
            for(int i=0; i<n; i++){
                pro*= arr[i];
            }
             cout << pro << endl;
        }
    }

    return 0;
}