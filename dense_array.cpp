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
        int count =0;
        for(int i=0; i<n-1; i++){
            double temp = max(arr[i], arr[i+1]);
            temp /= min(arr[i], arr[i+1]);
            if(temp <= 2){
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}