#include<iostream>
#include<string>

using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        string x;
        cin >> x;
        int sum1, sum2;
        sum1 = x[0] + x[1] + x[2];
        sum2 = x[3] + x[4] + x[5];
        if(sum1 == sum2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}