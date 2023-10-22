#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        if(k == 2){
            int maxi = 0;
            int check = 0;
            for(int i=0; i<n; i++){
                if(arr[i]%2 ==0){
                    check = 1;
                    break;
                }

                if(arr[i]%2 > maxi){
                    maxi = arr[i]%2;
                }
            }
            if(check == 1){
                cout << 0 << endl;
            }
            else{
                cout << 1 << endl;
            }
        }
        else if(k == 3){
            int maxi = 0;
            int check = 0;
            for(int i=0; i<n; i++){
                if(arr[i]%3 ==0){
                    check = 1;
                    break;
                }

                if(arr[i]%3 > maxi){
                    maxi = arr[i]%3;
                }
            }
            if(check == 1){
                cout << 0 << endl;
            }
            else{
                cout << 3-maxi << endl;
            }
        }
        else if(k==4){
            int maxi = 0;
            int check = 0;
            int pro = 1;
            for(int i=0; i<n; i++){
                if(arr[i]%4 ==0){
                    check = 1;
                    break;
                }
                if(arr[i]%4 > maxi){
                    maxi = arr[i]%4;
                }
                pro *= arr[i];
            }
            if(check == 1 || pro%4 == 0){
                cout << 0 << endl;
            }
            else{
                if(maxi == 2 || maxi == 3){
                    cout << 1 << endl;
                }
                else{
                    cout << 2 << endl;
                }
            }
        }
        else if(k == 5){
            int maxi = 0;
            int check = 0;
            for(int i=0; i<n; i++){
                if(arr[i]%5 ==0){
                    check = 1;
                    break;
                }

                if(arr[i]%5 > maxi){
                    maxi = arr[i]%5;
                }
            }
            if(check == 1){
                cout << 0 << endl;
            }
            else{
                cout << 5-maxi << endl;
            }
        }
    }

    return 0;
}