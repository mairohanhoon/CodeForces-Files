#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string str1, str2;
        cin >> str1 >> str2;
        string check = str1;
        int count = 0;
        if(str1.find(str2) != -1){
            cout << 0 << endl;
            continue;
        }
        int flag = 0;
        do{
            string temp = check;
            temp.append(check);
            check = temp;
            count++;
            if(check.find(str2) != -1){
                cout << count << endl;
                flag = 1;
                break;
            }
        }while(check.size() <= str2.size()*2);
        if(flag != 1){
            cout << -1 << endl;
        }
    }

    return 0;
}