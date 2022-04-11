#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int gcd(int a, int c, int& x, int& y)
{
    if (c == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(c, a % c, x1, y1);
    x = y1;
    y = x1 - y1 * (a / c);
    return d;
}
int main()
{
    fellow_junior

    int a,c,d,i,j;
    while(cin>>a>>c && a && c)
    {
       int  x,y;
       j=gcd(a,c,x,y);
       cout<<x<<" " <<y<<" "<<j<<endl;
    }

    return 0;
}
