#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        char arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int i=0;
        int count = 0;
        while(i<n){
            if(arr[i] == 'B'){
                i+=k;
                count++;
            }
            else{
                i++;
            }
        }
        cout << count << endl;
    }

    return 0;
}