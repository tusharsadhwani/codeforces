#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int i = 0;

    while (i < n) {
        if (i < k)
            cout << char('a' + (i%26));
        else {
            cout << char('a' + i%2);
        }
        i++;
    }

    return 0;
}
