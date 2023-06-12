#include<iostream>
using namespace std;

int main(){

    int n;
    cin >>n;
    int count = 0;
    char x[3];
    while(n--){
        cin >> x;
        if(x[1]=='+')
            count++;
        else if(x[1]=='-')
            count--;
    }
    cout << count << endl;

    return 0;
}