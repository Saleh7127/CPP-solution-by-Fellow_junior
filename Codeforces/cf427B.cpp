#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fellow_junior

    ll a[200005],c,d,e,f=0,i,j=0,k,l;
    cin>>c>>d>>e;
    for(i=0; i<c; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<c; i++)
    {
        if(a[i]<=d)
        {
           f++;
        }
        else
        {
            if(f-e+1>=0)
            {
                j+=(f-e+1);
            }
            f=0;
        }
    }
    if(f>0 && (f-e+1>=0))
    {
        j+=(f-e+1);
    }
    cout<<j<<endl;
    return 0;
}
