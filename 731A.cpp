#include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
// #include <map>

using namespace std;

int main()
{
    char curr, prev='a';
    int x, count=0;
    while (true) {
        scanf("%c", &curr);
        if (curr == '\n') break;

        count += min(abs(curr - prev), abs(26 - abs(curr - prev)));
        prev = curr;
    }

    cout << count;
    return 0;
}
