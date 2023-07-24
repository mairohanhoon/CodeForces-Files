#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int x = 3;
        int check = 1;
        if(n < 3){
            cout << "NO" << endl;
        }
        else{
            while(x<=n){
                if(n%x == 0){
                    check = 0;
                    break;
                }
                else{
                    x += 2;
                }
            }
            if(check == 1){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}