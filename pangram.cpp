#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;
    string a;
    cin >> n;
    cin >> a;
    int check = 0;
    for(int i=65; i<= 90; i++){
        check = 0;
        int j = 0;
        while(j<n){
            if(a[j] > 90){
                a[j] = a[j]-32;
            }
            if(a[j] == i){
                check = 1;
            }
            j++;
        }
        if(check == 0){
            break;
        }
    }
    if(check == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}