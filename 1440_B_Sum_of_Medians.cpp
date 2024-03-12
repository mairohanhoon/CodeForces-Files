#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n*k);
        for(int i=0; i<n*k; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int check;
        if(n%2 == 0) check = (n/2)-1;
        else check = n/2;
        int total = 0;
        for(int i=check; i<arr.size(); i+=n){
            total += arr[i];
        }
        cout << total << endl;
    }

    return 0;
}