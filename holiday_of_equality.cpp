#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];
    int maxxi = INT_MIN;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] > maxxi){
            maxxi = a[i];
        }
    }
    int count = 0;
    for(int i=0; i<n; i++){
        count+=maxxi-a[i];
    }
    cout << count << endl;

    return 0;
}