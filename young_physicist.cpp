#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int sum = 0;
    int arr[n][3];
    int sum1=0;
    int sum2 = 0;
    int sum3 = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        sum1+=arr[i][0];
        sum2+=arr[i][1];
        sum3+=arr[i][2];
    }
    if(sum1==0 && sum2==0 && sum3==0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}