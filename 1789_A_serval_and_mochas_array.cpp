#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int minni = INT_MAX;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(__gcd(arr[i], arr[j]) < minni){
                    minni = __gcd(arr[i], arr[j]);
                }
            }
        }
        if(minni > 2){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}