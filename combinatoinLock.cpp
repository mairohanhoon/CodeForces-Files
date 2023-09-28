#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2;
    int n;
    cin >> n;

    cin >> s1;
    cin >> s2;
    int sum = 0;
    for(int i=0; i<n; i++){
        if(s1[i] > s2[i]){
            if((s1[i]-s2[i]) > 5){
                sum += 10 - (s1[i]-s2[i]);
            }
            else{
                sum += s1[i]-s2[i];
            }
        }
        else{
            if((s2[i]-s1[i]) > 5){
                sum += 10 - (s2[i]-s1[i]);
            }
            else{
                sum += s2[i]-s1[i];
            }
        }
    }
    cout << sum << endl;

    return 0;
}