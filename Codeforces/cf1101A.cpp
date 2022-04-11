#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a,t,b,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(c<a)
        {
            cout<<c<<endl;
        }
        else
        {
            e=max(a,b);
            d=c*(e/c+1);
            cout<<d<<endl;
        }
    }
    return 0;
}
