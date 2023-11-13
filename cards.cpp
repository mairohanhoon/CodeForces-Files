#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> res;
    int count1 = 0;
    int count2 = 0;
    for(int i=0;i<n;i++){
        if(str[i] == 'n'){
            count1++;
        }
        if(str[i] == 'z'){
            count2++;
        }
    }
    while(count1--){
        res.push_back(1);
    }
    while(count2--){
        res.push_back(0);
    }
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }

    return 0;
}