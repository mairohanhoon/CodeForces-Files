#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int sum = 0;
    while(n--){
        int A[3];
        for(int i=0; i<3; i++){
            cin >> A[i];
            sum = sum + A[i];
        }
    }
    if(sum==0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}