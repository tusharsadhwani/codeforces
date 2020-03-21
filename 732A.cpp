#include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
// #include <map>

using namespace std;

int main()
{
    int k, r, i;
    cin >> k >> r;
    k %= 10;

    for (i = 1; i < 10; i++) {
        if ((k * i) % 10 == r || (k * i) % 10 == 0) {
            cout << i;
            break;
        }
    }
    if (i == 10) cout << 10;
    return 0;
}
