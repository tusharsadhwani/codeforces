#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char c;
    string s;
    cin >> c >> s;

    int shift = c == 'L' ? 1 : -1;

    for (char x : s) {
        int i = kb.find(x);
        cout << kb[i+shift];
    }

    return 0;
} 
