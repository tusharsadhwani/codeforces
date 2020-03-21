#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    vector<int> v;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    int start = 0, end = n-1;
    while (start+1 < n-1 && v[start] == v[start+1]) start++;

    while (end > start && v[end] == v[end-1]) end--;

    if (start == end) cout << 0;
    else cout << end - start - 1;

    return 0; 
} 
