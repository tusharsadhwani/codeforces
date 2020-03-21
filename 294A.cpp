#include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int birds[n];

    for (int i = 0; i < n; i++)
        cin >> birds[i];

    int m, x, y;
    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> x >> y;

        //fixing zero indexing on x
        x--;

        // yth bird on xth wire has been shot
        // so y-1 birds fly up
        if (x > 0)
            birds[x-1] += y-1;
        
        //rest birds fly down
        if (x < n)
            birds[x+1] += (birds[x] - y);
        
        birds[x] = 0;
    }

    for (int i : birds)
        cout << i << endl;

    return 0;
}
