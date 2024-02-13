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
        for(int i=0; i<n; i++){
            if(str[i] == 'B'){
                count++;
            }
        }
        if(count <= 1){
            cout << count << endl;
        }
        else{
            int res = 0;
            bool flag = 0;
            for(int i=0; i<n; i++){
                if(str[i] == 'B'){
                    flag = 1;
                    count--;
                }
                if(flag == 1){
                    res++;
                }
                if(count == 0){
                    break;
                }
            }
            cout << res << endl;
        }
    }

    return 0;
}