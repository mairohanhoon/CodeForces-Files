#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count = 1;
    int temp = 1;
    for(int i=0; i<n-1; i++){
        if(arr[i+1] > arr[i]){
            temp++;
        }
        else{
            count = max(temp, count);
            temp = 1;
        }
    }
    count = max(temp, count);
    cout << count << endl;

    return 0;
}