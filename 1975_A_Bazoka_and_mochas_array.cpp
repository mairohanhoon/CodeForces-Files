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
        int count = 0;
        int start = arr[0];
        int start2 = -1;
        int end1 = 0;
        for(int i=1; i<n; i++){
            if(arr[i] < arr[i-1]){
                count++;
                if(count > 1) 
                    break;
                start2 = arr[i];
                end1 = arr[i-1];
            }
        }
        if(count > 1) cout << "No" << endl;
        else if(count == 0) cout << "Yes" << endl;
        else if(count == 1 && arr[n-1] <= start) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}