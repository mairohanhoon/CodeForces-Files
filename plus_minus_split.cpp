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
        int count1 = 0;
        int count2 = 0;
        for(int i=0; i<n; i++){
            if(str[i] == '+'){
                count1++;
            }
            else{
                count2++;
            }
        }
        cout << abs(count1-count2) << endl;
    }

    return 0;
}