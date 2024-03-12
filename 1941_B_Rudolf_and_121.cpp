#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];

        for(int i=1; i<n-1; i++){
            int x = arr[i]/2;
            int a = min(x, min(arr[i-1], arr[i+1]));
                arr[i] -= 2*a;
                arr[i-1]-=a;
                arr[i+1]-=a;
        }
        bool flag = true;
        for(int i=0; i<n; i++){
            if(arr[i] != 0){
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}