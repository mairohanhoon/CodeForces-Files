#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> arr(n);
        int count = 0;
        for(int i=0; i<n; i++) cin >> arr[i];
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int temp1 = arr[i]+arr[j];
                int temp2 = abs(arr[i]-arr[j]);
                if(temp1%x == 0 && temp2%y == 0) count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}