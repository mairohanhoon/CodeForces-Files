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
        int front = 1;
        int back = 1;
        int i= 0;
        while(i+1 < n){
            if(arr[0] == arr[i+1]){
                i++;
                front++;
            }
            else{
                break;
            }
        }
        i = n-1;
        while(i-1 >= 0){
            if(arr[n-1] == arr[i-1]){
                i--;
                back++;
            }
            else{
                break;
            }
        }
        if(arr[0] == arr[n-1]){
            int total = front+back;
            if(total > n){
                cout << 0 << endl;
            }
            else
                cout << n-total << endl;
        }
        else{
            int total = max(front, back);
            if(total > n){
                cout << 0 << endl;
            }
            else
                cout << n-total << endl;
        }
    }

    return 0;
}