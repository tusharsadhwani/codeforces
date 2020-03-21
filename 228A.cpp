#include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
#include <map>

using namespace std;

int main()
{
    int x, count=0;
    map<int, int> m;
    for (int i = 0; i < 4; i++) {
        cin >> x;
        m[x]++;
    }
    
    for (pair<int, int> x : m) {
        count += x.second - 1;
    }
    cout << count;
    return 0;
}
