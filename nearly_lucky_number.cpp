#include<iostream>
using namespace std;

int main(){

    long long int n;
    cin >> n;
    int check = 0;
    while(n!=0){
        int x = n%10;
        n = n/10;
        if(x==7 || x==4){
            check++;
        }
    }
    if(check == 4 || check == 7){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}