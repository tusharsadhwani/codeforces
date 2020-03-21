#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n;
    cin >> n;
    
    int x, i;
    map<int, int[3]> m;
    int counter;

    for (i = 1; i < n+1; i++) {
        cin >> x;
        x--;

        counter = 1;
        while (true) {
            if (m[counter][x] == 0) {
                m[counter][x] = i;
                break;
            }
            counter++;
        }
    }

    counter = 0;
    for (pair<const int, int[3]> v : m) {
        if (
            v.second[0] != 0 &&
            v.second[1] != 0 &&
            v.second[2] != 0) {
                counter++;
        }
    }
    cout << counter << endl;

    for (int j = 1; j < counter+1; j++) {
        cout << m[j][0] << " " << m[j][1] << " " << m[j][2] << endl;
    }
    return 0;
}
