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
        arr[0]++;
        for(int i=0;i<n;i++){
            pro*=arr[i];
        }
        cout << pro << endl;
    }

    return 0;
}