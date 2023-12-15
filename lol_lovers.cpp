#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    string str; 
    cin >> str;
    int l = 0;
    int b = 0;
    for(int i=0; i<n; i++){
        if(str[i] == 'L'){
            l++;
        }
        else{
            b++;
        }
    }
    int l1 = 0;
    int b1 = 0;
    int check = -1;
    for(int i=0; i<n; i++){
        if(str[i] == 'L'){
            l1++;
            l--;
        }
        else{
            b--;
            b1++;
        }
        if(l!=l1 && b!=b1){
            if((l!=0 || b!=0) && (l1!=0 || b1!=0)){
                check = i+1;
                break;
            }
        }
    }
    cout << check << endl;

    return 0;
}