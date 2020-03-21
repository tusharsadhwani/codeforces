#include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
#include <map>

using namespace std;

int main()
{
    string s, t;
    int i = 0, j = 0, count=0;
    cin >> s >> t;

    while (s[i] != 0 && t[j] != 0) {
        if (s[i] == t[j]) {
            i++;
        }
        j++;
    }
    cout << i+1;
}
