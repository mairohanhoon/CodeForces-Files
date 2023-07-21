#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[3];
        for(int i=0; i<3; i++){
            cin >> arr[i];
        }
        sort(arr, arr+3);
        int sum = arr[1] + arr[2];
        if(sum >= 10){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}