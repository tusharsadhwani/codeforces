#include <algorithm>
#include <iostream>
#include <vector>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
    int n, acount = 0, dcount = 0;
    cin >> n;
    char x;
    for (int i = 0; i < n; i++) {
        scanf(" %c", &x);
        if (x == 'A') acount++;
        else if (x == 'D') dcount++;
        else cout << "WTF";
    }
 
    if (acount > dcount)
        cout << "Anton" << endl;
    else if (dcount > acount)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    
    return 0;
}
