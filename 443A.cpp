#include <iostream>
// #include <algorithm>
// #include <vector>
#include <set>
// #include <map>

// #define lli long long int

using namespace std;

int main()
{
    char c;
    set<char> s;

    while (true) {
        scanf("%c", &c);
        if (c == '{')
            continue;
        if (c == '}')
            break;
        
        if (c == ' ' || c == ',')
            continue;
        
        s.insert(c);
    }
    cout << s.size();
}
