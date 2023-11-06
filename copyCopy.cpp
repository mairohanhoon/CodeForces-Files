#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        unordered_map<int, int> hashh;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=0; i<n; i++){
            hashh[arr[i]]++;
        }
        cout << hashh.size() << endl;
    }

    return 0;
}