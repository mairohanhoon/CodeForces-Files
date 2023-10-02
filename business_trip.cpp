#include<bits/stdc++.h>
using namespace std;

int main(){

    int k;
    cin >> k;
    int arr[12];
    for(int i=0; i<12; i++){
        cin >> arr[i];
    }
    sort(arr, arr+12);
    reverse(arr, arr+12);
    int sum = 0;
    int count =0;
    int flag = 0;

    for(int i=0; i<12; i++){
        if(sum >=k){
            flag = 1;
            break;
        }
        else{
            sum += arr[i];
            count++;
        }
    }
    if(flag == 1){
        cout << count << endl;
    }
    else{
        if(sum >= k){
            cout << count << endl;
        }
        else{
            cout << -1 << endl;
        }
    }

    return 0;
}