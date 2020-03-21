#include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
// #include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sereja = 0, dima = 0;
    int begin = 0, end = n-1;
    bool sereja_turn = true;
    while (begin <= end) {
        if (a[begin] > a[end]) {
            if (sereja_turn)
                sereja += a[begin];
            else
                dima += a[begin];
            begin++;
        } else {
            if (sereja_turn)
                sereja += a[end];
            else
                dima += a[end];
            end--;
        }
        sereja_turn = !sereja_turn;
    }
    cout << sereja << ' ' << dima;
    return 0;
}
