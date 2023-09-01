#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;
    cin >> n;
    string s;
    cin >> s;
    n--;
    int count1 = 1;
    int count2= 0;
    string sec;
    while(n--){
        string temp;
        cin >> temp;
        if(temp == s){
            count1++;
        }
        else{
            sec = temp;
            count2++;
        }
    }
    if(count1 > count2){
        cout << s << endl;
    }
    else{
        cout << sec << endl;
    }

    return 0;
}