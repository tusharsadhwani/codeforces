#include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
#include <map>

// #define lli long long int

using namespace std;

int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    if (k * (((int)d/t)+1) < n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
