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
        int sum = 0;
        int check = 0;
        for(int i=0; i<n-1; i++){
            if(arr[i] == -1 && arr[i+1] == -1 && check == 0){
                arr[i] = 1;
                arr[i+1] = 1;
                check = 1;
            }
            sum += arr[i];
        }
        sum += arr[n-1];
        if(check == 0){
            for(int i=0; i<n-1; i++){
                if(arr[i] == 1 && arr[i+1] == -1){
                    check = 1;
                    break;
                }
                if(arr[i] == -1 && arr[i+1] == 1){
                    check = 1;
                    break;
                }
            }
        }

        if(check == 0){
            sum -=4;
        }
        cout << sum << endl;
    }

    return 0;
}