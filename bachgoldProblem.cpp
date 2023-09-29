#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> res;
    int n;
    cin >> n;
    while(n!=0){
        if(n == 3){
            res.push_back(3);
            n-=3;
        }
        else{
            res.push_back(2);
            n-=2;
        }
    }
    cout << res.size() << endl;
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }
    cout << endl;
    
    return 0;
}