#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // ofstream out("o.txt");
	// cout.rdbuf(out.rdbuf());

    int n, m, x;
    cin >> n;
    m = n;

    set<int> s;
    s.insert(INT32_MIN);
    for (int i = 0; i < n; i++) {
        cin >> x;
        auto itp = s.insert(x);
        set<int>::iterator it;
        if (itp.second) {
            it = itp.first;
        }
        while (it != s.begin()) {
            if (*it == m) {
                cout << m << " ";
                it--;
                m--;
            }
            else {
                break;
            }
        }

        cout << "\n";
    }

    return 0;    
}
