#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i;
    cin >> a;
    int c = 0;
    for ( i = 5; a / i >= 1; i *= 5)
    {
        c += a / i;
    }
    cout << c;
    return 0;
}
