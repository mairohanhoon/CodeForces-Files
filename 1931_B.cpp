#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int total = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            total += arr[i];
        }
        int avg = total/n;
        int extra = 0;
        int flag = 0;
        for(int i=0; i<n; i++){
            if(arr[i] > avg){
                extra += arr[i]-avg;
            }
            if(arr[i] < avg){
                extra -= (avg-arr[i]);
            }
            if(extra < 0){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }

    }

    return 0;
}