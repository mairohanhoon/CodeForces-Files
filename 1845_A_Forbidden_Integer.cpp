#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;
        if(k == 1){
            cout << "NO" << endl;
            continue;
        }
        else if(k <= 2){
            if(x == 1){
                if(n%2 == 0){
                    cout << "YES" << endl;
                    cout << n/2 << endl;
                    for(int i=1; i<=n/2; i++){
                        cout << 2 << " ";
                    }
                    cout << endl;
                    continue;
                }
                else{
                    cout << "NO" << endl;
                }
            }
            else{
                cout << "YES" << endl;
                cout << n << endl;
                for(int i=1; i<=n; i++){
                        cout << 1 << " ";
                    }
                    cout << endl;
                    continue;
            }
        }
        else{
            if(n%2 == 0 && x != 2){
                cout << "YES" << endl;
                    cout << n/2 << endl;
                    for(int i=1; i<=n/2; i++){
                        cout << 2 << " ";
                    }
                    cout << endl;
                    continue;
            }
            else if((n%2 == 0 && x == 2) || (n%2 != 0 && x != 1)){
                cout << "YES" << endl;
                cout << n << endl;
                for(int i=1; i<=n; i++){
                        cout << 1 << " ";
                    }
                    cout << endl;
                    continue;
            }
            else{
                cout << "YES" << endl;
                cout << 1+((n-3)/2) << endl;
                cout << 3 << " ";
                n-=3;
                    for(int i=1; i<=n/2; i++){
                        cout << 2 << " ";
                    }
                    cout << endl;
                    continue;
            }
        }
    }

    return 0;
}