#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vectr<int> arr;
        for(int i=1; i<=x; i++){
            arr.push_back(i);
        }
        for(int i=n; i>=x+1; i--){
            arr.push_back(i);
        }
        for(int i=0; i<arr.size(); i++){
            cout << arr[i] <<" ";
        }
        cout << endl;
    }


    return 0;
}