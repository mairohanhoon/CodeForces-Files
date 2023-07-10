#include<iostream>
#include<string>

using namespace std;

int main(){

    string s1, s2, s3, s4, s5;
    s1 = "Tetrahedron";
    s2 = "Cube";
    s3 = "Octahedron";
    s4 = "Dodecahedron";
    s5 = "Icosahedron";
    string s;
    int t;
    cin >> t;
    int count = 0;
    while(t--){
        cin >> s; 
        if(s == s1){
            count+=4;
        }
        else if(s == s2){
            count+=6;
        }
        else if(s == s3){
            count+=8;
        }
        else if(s == s4){
            count+=12;
        }
        else if(s == s5){
            count+=20;
        }
    }
    cout << count << endl;

    return 0;
}