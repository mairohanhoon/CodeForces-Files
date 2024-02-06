#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int total = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i] == 2){
                total++;
            }
        }
        if(total%2 == 1){
            cout << -1 << endl;
            continue;
        }
        for(int i=0; i<n; i++){
            if(arr[i] == 2){
                count++;
                total--;
            }
            if(total == count){
                cout << i+1 << endl;
                break;
            }
        }

    }

    return 0;
}