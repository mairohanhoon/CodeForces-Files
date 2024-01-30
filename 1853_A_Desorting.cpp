#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int check = 0;
        int minni = INT_MAX;
        for(int i=0; i<n-1; i++){
            if(arr[i+1] < arr[i]){
                check = 1;
                break;
            }
            else{
                minni = min(arr[i+1]-arr[i], minni);
            }
        }
        if(check == 1){
            cout << 0 << endl;
        }
        else{
            minni++;
            if(minni%2 ==0){
                cout << minni/2 << endl;
            }
            else{
                cout << (minni/2)+1 << endl;
            }
        }
    
    }

    return 0;
}