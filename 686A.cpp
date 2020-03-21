#include <iostream>
#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n;
    lli x;
    char c;

    int r, dis = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> c;
        cin >> r;

        if (c == '+')
            x += r;
        
        else if (c == '-') {
            if (x >= r) {
                x -= r;
            } else {
                dis++;
            }
        }

        else
            cout << "WTF";
    }
    cout << x << " " << dis;
}
