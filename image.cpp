#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        string a, b;
        cin >> a>> b;
        string str = a + b;
        sort(str.begin(), str.end());
        int i = 0;
        int count  = 0;
        int x = 1;
        while(i<4){
            if(str[i] == str[i+1]){
                x = 1;
                while(str[i] == str[i+x]){
                    x++;
                }
                count++;
                i+=x;
            }
            else{
                count++;
                i++;
            }
        }
        cout << count-1 << endl;
    }


    return 0;
}