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
        int check = 0;
        int sum = 0;
        int res = INT_MIN;
        if(abs(arr[0])%2 == 0){
            check = 1;
        }
        sum+=arr[0];
        if(sum > res){
            res = sum;
        }
        if(sum < 0){
            sum = 0;
        }
        for(int i=1; i<n; i++){
            if(check == 1){
                if(abs(arr[i])%2 != 1){
                    sum = arr[i];
                }
                else{
                    sum += arr[i];
                    check = 0;
                }
            }
            else{
                if(abs(arr[i])%2 != 0){
                    sum = arr[i];
                }
                else{
                    sum += arr[i];
                    check = 1;
                }
            }
            if(sum > res){
                res = sum;
            }
            if(sum < 0){
                sum = 0;
            }
            
        }
        
        cout << res << endl;
    }

    return 0;
}