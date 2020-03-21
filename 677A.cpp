#include <algorithm>
#include <iostream>
#include <vector>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
    int n, h, x, ans = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > h)
            ans += 2;
        else
            ans++;
    }
    
    cout << ans << endl;
    return 0;
}
