#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int maxxi = INT_MIN;
    int maxxi_index = -1;
    int minni = INT_MAX;
    int minni_index = -1;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > maxxi){
            maxxi = arr[i];
            maxxi_index = i;
        }
        if(arr[i] < minni){
            minni = arr[i];
        }
    }
    if(maxxi_index!=0){
        for(int i=maxxi_index; i>=1; i--){
            swap(arr[i], arr[i-1]);
            count++;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(arr[i] == minni){
            minni_index = i;
            break;
        }
    }
    if(minni_index!=n-1){
        for(int i=minni_index; i<n-1; i++){
            swap(arr[i], arr[i+1]);
            count++;
        }
    }
    cout << count << endl;


    return 0;
}