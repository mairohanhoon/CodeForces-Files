#include<bits/stdc++.h>
#define vec vector<int>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;
        int check1 = 0;
        int check2 = 0;
        int check3 = 0;
        if(k>=3){
            check1 = 1;
            check2 = 1;
            check3 = 1;
        }
        else if(k >= 2){
            check1 = 1;
            check2 = 1;
        }
        else{
            check1 = 1;
        }

        if(x == 1){
            check1 = 0;
        }
        else if(x == 2){
            check2 = 0;
        }
        else if(x==3){
            check3 = 0;
        }
        vec res;
        if(check1 == 1){
            while(n!=0){
                res.push_back(2);
                n-=2;
            }
        }
        else if(check1 == 0 && check2 == 0){
            cout << "NO" << endl;
            continue;
        }
        else if(check1 == 0 && check3 == 0){
            if(n%2 != 0){
                cout << "NO" << endl;
                continue;
            }
            else{
                while(n!=0){
                    res.push_back(2);
                    n-=2;
                }
            }
        }
        else if(check1 == 0){
            if(n == 1){
                cout << "NO" << endl;
                continue;
            }
            else{
                if(n%2 != 0){
                    res.push_back(3);
                    n-=3;
                }
                while(n!=0){
                    res.push_back(2);
                    n-=2;
                }
            }
        }
        else{
            cout << 69 << endl;
            continue;
        }
        cout << "YES" << endl;
        cout << res.size() << endl;
        for(int i=0; i<res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}