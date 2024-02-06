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
        swap(arr[0], arr[1]);
        swap(arr[n-1], arr[0]);
        if(arr[0] != arr[1]){
            cout << "YES" << endl;
            for(int i=0; i<n; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}