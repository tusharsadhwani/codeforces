#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    vector<int> s;
    char c;
    while (true) {
        scanf("%c", &c);
        if (c == '\n')
            break;
        
        if (c == '+')
            continue;
        
        s.push_back(c - 48);
    }
    sort(s.begin(), s.end());

    for(auto i = s.begin(); i < s.end() - 1; i++) {
        cout << *i << '+';
    }
    cout << *(s.end() - 1);

    return 0;
}
