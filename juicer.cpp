#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, b, d;
    cin >> n >> b >> d;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int total = 0;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] <= b){
            total += arr[i];
        }
        if(total > d){
            count++;
            total = 0;
        }
    }
    cout << count << endl;

    return 0;
}