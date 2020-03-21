#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n, k, evens;
	cin >> n >> k;

	// stores index of first even number
	evens = n/2 + n%2;

	if (k > evens) {
		k -= evens;
		cout << 2*k;
	} else {
		cout << 2*k - 1;
	}

	return 0;
}
