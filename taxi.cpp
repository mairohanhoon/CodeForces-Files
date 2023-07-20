#include<iostream>
#include<bits/c++io.h>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count = 0;
    int x = 4;
    int i=0;
    sort(arr, arr+n);
    while(i<n){
        x -= arr[i];
        i++;
        if(x<arr[i]){
            x = 4;
            count++;
        }
    }
    cout << count << endl;

    return 0;
}