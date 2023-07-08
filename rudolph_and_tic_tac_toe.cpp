#include<iostream>
#include<string>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string a, b, c;
        cin >> a ;
        cin >> b;
        cin >> c;
        if(a[0] == a[1] && a[1] == a[2] && a[1] == 'X'){
            cout << "X" << endl;
        }
        else if(b[0] == b[1] && b[1] == b[2] && b[1] == 'X'){
            cout << "X" << endl;
        }
        else if(c[0] == c[1] && c[1] == c[2] && c[1] == 'X'){
            cout << "X" << endl;
        }
        else if(a[0] == b[0] && b[0] == c[0] && b[0] == 'X'){
            cout << "X" << endl;
        }
        else if(a[1] == b[1] &&  b[1] == c[1] && b[1]== 'X'){
            cout << "X" << endl;
        }
        else if(a[2] == b[2] && b[2] == c[2] && b[2] == 'X'){
            cout << "X" << endl;
        }
        else if(a[0] == b[1] && b[1] == c[2] && b[1] == 'X'){
            cout << "X" << endl;
        }
        else if(a[2] == b[1] && b[1] == c[0] && b[1]== 'X'){
            cout << "X" << endl;
        }
        else if(a[0] == a[1] && a[1] == a[2] && a[1] == 'O'){
            cout << "O" << endl;
        }
        else if(b[0] == b[1] && b[1] == b[2] && b[1] == 'O'){
            cout << "O" << endl;
        }
        else if(c[0] == c[1] && c[1] == c[2] && c[1] == 'O'){
            cout << "O" << endl;
        }
        else if(a[0] == b[0] && b[0] == c[0] && b[0] == 'O'){
            cout << "O" << endl;
        }
        else if(a[1] == b[1] &&  b[1] == c[1] && b[1]== 'O'){
            cout << "O" << endl;
        }
        else if(a[2] == b[2] && b[2] == c[2] && b[2] == 'O'){
            cout << "O" << endl;
        }
        else if(a[0] == b[1] && b[1] == c[2] && b[1] == 'O'){
            cout << "O" << endl;
        }
        else if(a[2] == b[1] && b[1] == c[0] && b[1]== 'O'){
            cout << "O" << endl;
        }
        else if(a[0] == a[1] && a[1] == a[2] && a[1] == '+'){
            cout << "+" << endl;
        }
        else if(b[0] == b[1] && b[1] == b[2] && b[1] == '+'){
            cout << "+" << endl;
        }
        else if(c[0] == c[1] && c[1] == c[2] && c[1] == '+'){
            cout << "+" << endl;
        }
        else if(a[0] == b[0] && b[0] == c[0] && b[0] == '+'){
            cout << "+" << endl;
        }
        else if(a[1] == b[1] &&  b[1] == c[1] && b[1]== '+'){
            cout << "+" << endl;
        }
        else if(a[2] == b[2] && b[2] == c[2] && b[2] == '+'){
            cout << "+" << endl;
        }
        else if(a[0] == b[1] && b[1] == c[2] && b[1] == '+'){
            cout << "+" << endl;
        }
        else if(a[2] == b[1] && b[1] == c[0] && b[1]== '+'){
            cout << "+" << endl;
        }
        else{
            cout << "DRAW" << endl;
        }
    }

    return 0;
}