#include<iostream>
#include<string>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string a, b;
        int n;
        cin >> n;
        cin >> a >> b;
        int check = 1;
        for(int i=0; i<n; i++){
            if(a[i] == 'R'){
                if(b[i] != 'R'){
                    check = 0;
                    break;
                }
            }
            else{
                if(b[i] == 'R'){
                    check = 0;
                    break;
                }
            }
        }
        if(check == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}