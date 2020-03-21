#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // ofstream out("o.txt");
	// cout.rdbuf(out.rdbuf());

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
       cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) cout << a[1] - a[0];
        else if (i == n - 1) cout << a[n-1] - a[n-2];
        else cout << min(a[i] - a[i-1], a[i+1] - a[i]);

        cout << " ";

        if (i == 0) cout << a[n-1] - a[0];
        else if (i == n - 1) cout << a[n-1] - a[0];
        else cout << max(a[i] - a[0], a[n-1] - a[i]);

        cout << endl;
    }

	return 0;
}
