#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // ofstream out("o.txt");
	// cout.rdbuf(out.rdbuf());

    string a, b;
    cin >> a >> b;

    if (a.compare(b) == 0) cout << -1;
    else cout << max(a.length(), b.length());
}
