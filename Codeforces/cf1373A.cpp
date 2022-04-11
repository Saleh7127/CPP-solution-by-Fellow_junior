#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    test
    {
        ll a,b,c,d,e,f,i,j,k,l;
        cin>>a>>b>>c;
         d=-1,e=-1;

        if(c>a) d = 1;
        if(c/b<a) e = b;
        cout << d << " " << e << endl;
    }
    return 0;
}
