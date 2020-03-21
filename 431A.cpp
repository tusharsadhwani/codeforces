#include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
// #include <map>

using namespace std;

int main()
{
    int a1, a2, a3, a4, x, cal=0;
    char c;
    cin >> a1 >> a2 >> a3 >> a4;
    scanf(" ");

    while (true) {
        scanf("%c", &c);
        if (c == '\n') break;

        x = int(c - '0');
        if (x == 1)
            cal += a1;
        else if (x == 2)
            cal += a2;
        else if (x == 3)
            cal += a3;
        else if (x == 4)
            cal += a4;
        else cout << "WTF\n";
    }
    cout << cal;
    return 0;
}
