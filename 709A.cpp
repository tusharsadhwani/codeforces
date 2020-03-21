#include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
#include <map>

// #define lli long long int

using namespace std;

int main()
{
    int n, b, d;
    int x, waste = 0, overflow = 0;
    cin >> n >> b >> d;
    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x > b)
            continue;
        
        waste += x;

        if (waste > d) {
            waste = 0;
            overflow++;
        }
    }
    cout << overflow;
}
