#include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
// #include <map>

using namespace std;

int main()
{
    int n, count=0;
    cin >> n;
    int a[n][2];

    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
    }

    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            if (j != k) { 
                if (a[j][0] == a[k][1])
                    count++;
            }
        }
    }

    cout << count;
}
