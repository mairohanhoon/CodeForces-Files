#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n];
        int str[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=0; i<n; i++){
            cin >> str[i];
        }
        sort(str, str+n);
        sort(arr, arr+n);
        reverse(str, str+n);
        int sum =0;
        int i=0;
        while(k-- && i<n){
            if(arr[i]<str[i]){
                sum += str[i];
            }
            else{
                sum += arr[i];
            }
            i++;
        }
        while(i!=n){
            sum+=arr[i];
            i++;
        }
        cout << sum << endl;
    }

    return 0;
}