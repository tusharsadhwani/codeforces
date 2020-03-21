#include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
// #include <map>

using namespace std;

int main()
{
    int n, curr, prev = 0, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (curr != prev) {
            count++;
        }
        prev = curr;
    }
    cout << count;
    return 0;
}
