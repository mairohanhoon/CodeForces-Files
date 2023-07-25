#include<iostream>
#include<string>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int check = 1;
        if(n%2 != 0){
            check = 0;
        }
        else{
            for(int i=0; i<n/2; i++){
                if(s[i] != s[i+(n/2)]){
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