#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
    ll a,c,d=0,e,f,i,j,k,l;
    cin>>a>>c;
    e=(a+c)/3;
    d=min(a,min(c,e));
    cout<<d<<endl;
    return 0;
}
