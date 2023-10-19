#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int res = 0;
    int sum =0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
        if(sum < 0){
            if(abs(sum) > res){
                res = abs(sum);
            }
        }
    }
    cout << res << endl;

    return 0;
}