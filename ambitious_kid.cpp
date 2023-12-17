#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int check = 0;
    long long p_min = INT_MAX;
    long long n_max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            check = 1;
            break;
        }
        else if(arr[i] > 0){
            if(arr[i] < p_min){
                p_min = arr[i];
            }
        }
        else{
            if(arr[i] > n_max){
                n_max = arr[i];
            }
        }
    }
    if(n == 1){
        cout << abs(arr[0]) << endl;
    }
    else if(check == 1){
        cout << 0 << endl;
    }
    else{
        cout << min(abs(n_max), p_min) << endl;
    }

    return 0;
}