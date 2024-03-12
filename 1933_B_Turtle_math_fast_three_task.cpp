#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long sum = 0;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        // for(int i=0; i<n; i++){
        //     cout << arr[i] << " "; 
        // }
        // cout << endl;
        // cout << sum << endl;
        if(sum%3 == 0){
            cout << 0 << endl;
        }
        else if(sum%3 == 1){
            int flag = 0;
            for(int i=0; i<n; i++){
                if(arr[i]%3 == 1){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }
        }
        else{
            cout << 1 << endl;
        }
    }

    return 0;
}