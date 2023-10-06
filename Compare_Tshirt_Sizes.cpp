#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        if(s1 == s2){
            cout << "=" << endl;
        }
        else{
            if(s1[s1.size()-1] < s2[s2.size()-1]){
                cout << ">" << endl;
            }
            else if(s1[s1.size()-1] == s2[s2.size()-1]){
                if(s1.size() > s2.size() && s1[s1.size()-1] != 'S'){
                    cout << ">" << endl;
                }
                else if(s1.size() < s2.size() && s1[s1.size()-1] != 'S'){
                    cout << "<" << endl;
                }
                else if(s1.size() > s2.size()){
                    cout << "<" << endl;
                }
                else{
                    cout << ">" << endl;
                }

            }
            else{
                cout << "<" << endl;
            }
        }
    }

    return 0;
}