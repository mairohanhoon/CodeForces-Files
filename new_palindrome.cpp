#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        unordered_map<int,int> hashh;
        for(int i=0; i<str.size(); i++){
            hashh[str[i]]++;
        }
        int count = 0;
        int check = 0;
        for(auto it:hashh){
            if(it.second%2 != 0){
                if(it.second > 1){
                    count++;
                }
                check++;
            }
            else{
                count++;
            }
        }
        if(check > 1){
            cout << "NO" << endl;
        }
        else if(check == 1 && str.size()%2 == 0){
            cout << "NO" << endl;
        }
        else{
            if(count <= 1){
                string temp = str;
                reverse(str.begin(), str.end());
                if(str == temp){
                    cout << "NO" << endl;
                }
                else{
                    cout << "YES" << endl;
                }
            }
            else{
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}