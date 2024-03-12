#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        int count = 0 ;
        for(int i=0; i<n; i++){
            if(str[i] == '*'){
                if(i+1 < n && str[i+1] == '*'){
                    break;
                }
                continue;
            }
            else if(str[i] == '@'){
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}   