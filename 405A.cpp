#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v = {};
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (int i : v) {
        cout << i << " ";
    }

    return 0;
}
