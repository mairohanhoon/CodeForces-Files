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
        int count = 0;
        for(int i=0; i<n-2; i++){
            if(str[i] == 'm'){
                if(str[i+1] == 'a' && str[i+2] == 'p'){
                    count++;
                    i+=2;
                }
            }
            else if(str[i] == 'p'){
                if(str[i+1] == 'i' && str[i+2] == 'e'){
                    count++;
                    i+=2;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}