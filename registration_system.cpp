#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    map<string, int> check;
    while(t--){
        string str;
        cin >> str;
        check[str]++;
        if(check[str] > 1){
            int num = check[str]-1;
            string temp ="";
            while(num!=0){
                temp += num%10 + 48;
                num/=10;
            }
            reverse(temp.begin(), temp.end());
            str += temp;
            cout << str << endl;
        }
        else{
            cout << "OK" << endl;
        }
    }

    return 0;
}