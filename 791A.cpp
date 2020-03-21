#include <algorithm>
#include <iostream>
#include <vector>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
    int limak, bob, years = 0;
    cin >> limak >> bob;
 
    while (limak <= bob)
    {
        limak *= 3;
        bob *= 2;
        years++;
    }
    cout << years;
    return 0;
}
