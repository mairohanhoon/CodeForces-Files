#include<bits/stdc++.h>
using namespace std;

int main(){

    int x;
    cin >> x;

    if(x%5 == 0){
        cout << "Howard" << endl;
    }
    else if(x%5 == 1){
        cout << "Sheldon" << endl;
    }
    else if(x%5 == 2){
        cout << "Leonard" << endl;
    }
    else if(x%5 == 3){
        cout << "Penny" << endl;
    }
    else{
        cout << "Rajesh" << endl;
    }

    return 0;
}