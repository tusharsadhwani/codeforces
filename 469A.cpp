#include <bits/stdc++.h>
using namespace std;
 
int main() {
	set<int> S;
	int n, p, x;
	cin >> n;
	
	for (cin >> p; p > 0; p--) {
		cin >> x;
		S.insert(x);
	}
	for (cin >> p; p > 0; p--) {
		cin >> x;
		S.insert(x);
	}
	if (S.size() == n)
		cout << "I become the guy.";
	else
		cout << "Oh, my keyboard!";
}
 
