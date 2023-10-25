#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        map<int, int> res;
        int i= 1;
        int temp = 1;
        while(temp <= x){
            temp = pow(i, 2);
            if(temp <= x){
                res[temp]++;
            }
            i++;
        }
        temp = 1;
        i = 1;
        while(temp <= x){
            temp = pow(i, 3);
            if(temp <= x){
                res[temp]++;
            }
            i++;
        }
        int count = 0;
        for(auto it:res){
            count++;
        }
        cout << count << endl;
    }

    return 0;
}