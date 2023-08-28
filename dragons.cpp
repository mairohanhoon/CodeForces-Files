#include<bits/stdc++.h>
using namespace std;
int main(){

    int x, n;
    cin >> x >> n;
    int check = 1;
    int arr[n][2];
    for(int i=0; i<n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        cout << arr[i][0] << " " <<  arr[i][1] << endl;
    }



    // if(check == 1){
    //     cout << "YES" << endl;
    // }
    // else{
    //     cout << "NO" << endl;
    // }

    return 0;
}