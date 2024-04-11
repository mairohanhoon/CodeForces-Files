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
        int count = 1;
        int index = (n/2);
        if(n%2 == 0) index--;
        sort(arr.begin(), arr.end());
        for(int i=index+1; i<n; i++){
            if(arr[i] == arr[index]){
                count++;
            }
            else{
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}