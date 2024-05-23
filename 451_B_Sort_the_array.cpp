#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<int> b = a;
    sort(a.begin(), a.end());
    vector<int> c;
    int count = 0;
    bool flag = false;
    for(int i=0; i<n; i++){
        if(a[i] != b[i]){
            if(!flag){
                flag = true;
                count++;
                c.push_back(i+1);
                cout << "uear" << endl;
            }
        }
        else{
            if(flag){
                flag = false;
                count++;
                cout << 
                c.push_back(i+1);
            }
        }
    }
    if(count == 0){
        cout << "yes" << endl;
        cout << "1 1" << endl;
    }
    else if(count == 1){
        cout << "yes" << endl;
        cout << c[0] << " " << n << endl;
    }
    else if(count == 2){
        cout << "yes" << endl;
        cout << c[0] << " " << c[1] << endl;
    }
    else{
        cout << "no" << endl;
    }
    cout << count << endl;

    return 0;
}