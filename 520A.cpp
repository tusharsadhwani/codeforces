#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    set<char> S;
    for (char c = 'A'; c <= 'Z'; c++) {
        S.insert(c);
    }

    int n;
    string s;
    cin >> n >> s;

    for (char x : s) {
        if (x > 'Z') x -= 32;
        S.erase(x);
    }

    // for (char x : S) {
    //     cout << x;
    // }

    if (S.empty()) cout << "YES"; else cout << "NO";
    
    return 0;
} 
