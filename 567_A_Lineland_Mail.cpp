#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        int minn = INT_MAX;
        int maxx = INT_MIN;
        for(int j=0; j<n; j++){
            if(i!=j){
                if(abs(arr[i]-arr[j]) > maxx){
                    maxx = abs(arr[i]-arr[j]);
                }
                if(abs(arr[i]-arr[j]) < minn){
                    minn = abs(arr[i]-arr[j]);
                }
            }
        }
        cout << minn << " " << maxx << endl;
    }

    return 0;
}