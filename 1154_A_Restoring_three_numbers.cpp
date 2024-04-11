#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> res(4);
    cin >> res[0] >> res[1] >> res[2] >> res[3];
    sort(res.rbegin(), res.rend());
    for(int i=1; i<4; i++){
        cout << res[0]-res[i] << " ";
    }
    cout << endl;

    return 0;
}