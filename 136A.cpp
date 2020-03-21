#include<bits/stdc++.h>

using namespace std;

int main() {
	// ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // ofstream out("o.txt");
	// cout.rdbuf(out.rdbuf());

    int n, x;
    cin >> n;
    int a[n];

    for (int i = 1; i <= n; i++) {
        cin >> x;
        a[x-1] = i;
    }

    for (int i : a) {
        cout << i << " ";
    }

	return 0;
}
