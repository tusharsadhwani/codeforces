#include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
// #include <map>

using namespace std;

int main()
{
    int i = 0, lower = 0, upper = 0;
    bool setLower;
    char c, s[100] = {0};
    while (true) {
        scanf("%c", &c);
        if (c == '\n')
            break;
        
        if (c <= 'Z') {
            upper++;
        } else {
            lower++;
        }
        s[i] = c;
        i++;
    }
    
    if (upper > lower)
        setLower = false;
    else
        setLower = true;

    int j = 0;
    while (j < 100)
    {
        c = s[j];
        if (c == 0) break;
        
        if (setLower && c <= 'Z')
            c += 32;
        else if (!setLower && c > 'Z')
            c -= 32;
        
        cout << c;
        j++;
    }

    return 0;
}
