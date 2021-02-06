#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, t;
  cin >> n >> t;
  if (n == 1)
  {
    cout << (t == 10 ? -1 : t) << endl;
    return 0;
  }

  if (t == 10)
  {
    cout << 1;
    t = 0;
    n--;
  }
  for (int i = 0; i < n; i++)
    cout << t;
  cout << endl;
  return 0;
}