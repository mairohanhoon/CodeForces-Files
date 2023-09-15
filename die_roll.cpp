#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;
    int c = max(a,b);
    if(c == 1){
        cout << "1/1" << endl;
    }
    else if(c == 2){
        cout << "5/6" << endl;
    }else if(c == 3){
        cout << "2/3" << endl;
    }
    else if(c == 4){
        cout << "1/2" << endl;
    }
    else if(c == 5){
        cout << "1/3" << endl;
    }
    else if(c == 6){
        cout << "1/6" << endl;
    }
    else{
        cout << "0/1" << endl;
    }
    return 0;
}