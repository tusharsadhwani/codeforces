#include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
// #include <map>

using namespace std;

int main()
{
    int n, x, policemen=0, crimes=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == -1) {
            if (policemen == 0)
                crimes++;
            else
                policemen--;
        } else {
            policemen += x;
        }
    }
    cout << crimes;
    return 0;
}
