#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string hate1 = "I hate it";
    string hate2 = "I hate that ";
    string love1 = "I love it";
    string love2 = "I love that ";
    int i=1;
    while(i<=n){
        if(i%2 == 0){
            if(n==i){
                cout << love1;
            }
            else{
                cout << love2;
            }
        }
        else{
            if(n==i){
                cout << hate1;
            }
            else{
                cout << hate2;
            }
        }
        i++;
    }

    return 0;
}