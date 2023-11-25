#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count = 0;
    int a=0;
    int b=0;
    sort(arr, arr+n);
    reverse(arr, arr+n);
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(a>b+arr[j]){
            b+=arr[j];
            j--;
        }
        else{
            a+=arr[i];
            i++;
            count++;
        }
    }
    cout << count << endl;

    return 0;
}