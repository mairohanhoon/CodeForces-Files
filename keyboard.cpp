#include<bits/stdc++.h>
using namespace std;

int main(){

    char t;
    cin >> t;
    string str;
    cin >> str;
    map<char, char> hashh;
    if(t=='R'){
        hashh['p'] = 'o';
        hashh['o'] = 'i';
        hashh['i'] = 'u';
        hashh['u'] = 'y';
        hashh['y'] = 't';
        hashh['t'] = 'r';
        hashh['r'] = 'e';
        hashh['e'] = 'w';
        hashh['w'] = 'q';
        hashh[';'] = 'l';
        hashh['l'] = 'k';
        hashh['k'] = 'j';
        hashh['j'] = 'h';
        hashh['h'] = 'g';
        hashh['g'] = 'f';
        hashh['f'] = 'd';
        hashh['d'] = 's';
        hashh['s'] = 'a';
        hashh['/'] = '.';
        hashh['.'] = ',';
        hashh[','] = 'm';
        hashh['m'] = 'n';
        hashh['n'] = 'b';
        hashh['b'] = 'v';
        hashh['v'] = 'c';
        hashh['c'] = 'x';
        hashh['x'] = 'z';
        for(int i=0; i<str.size(); i++){
            str[i] = hashh[str[i]];
        }
    }
    else{
        hashh['q'] = 'w';
        hashh['w'] = 'e';
        hashh['e'] = 'r';
        hashh['r'] = 't';
        hashh['t'] = 'y';
        hashh['y'] = 'u';
        hashh['u'] = 'i';
        hashh['i'] = 'o';
        hashh['o'] = 'p';
        hashh['a'] = 's';
        hashh['s'] = 'd';
        hashh['d'] = 'f';
        hashh['f'] = 'g';
        hashh['g'] = 'h';
        hashh['h'] = 'j';
        hashh['j'] = 'k';
        hashh['k'] = 'l';
        hashh['l'] = ';';
        hashh['z'] = 'x';
        hashh['x'] = 'c';
        hashh['c'] = 'v';
        hashh['v'] = 'b';
        hashh['b'] = 'n';
        hashh['n'] = 'm';
        hashh['m'] = ',';
        hashh[','] = '.';
        hashh['.'] = '/';
        for(int i=0; i<str.size(); i++){
            str[i] = hashh[str[i]];
        }
    }
    cout << str << endl;

    return 0;
}