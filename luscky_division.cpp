#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int x;
    cin >> x;
    bool check = 1;
    if (x % 4 == 0 || x % 7 == 0 || x % 44 == 0 || x % 47 == 0 || x % 74 == 0 || x % 77 == 0 || x % 444 == 0 || x % 447 == 0 || x % 474 == 0 || x % 744 == 0 || x % 477 == 0 || x % 747 == 0 || x % 774 == 0 || x % 777 == 0)
    {
        cout << "YES";
    }
    else{
        while(x!=0){
            if(x%10 == 7 || x%10 == 4){
                x/=10;
            }
            else{
                check = 0;
                break;
            }
        }
        if(check == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}