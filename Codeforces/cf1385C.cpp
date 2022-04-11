#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fellow_junior
    test
    {
        ll a[200005],c,d,e,f,i,j,k,l;
        cin>>c;
        for(i=0;i<c;i++)
        {
            cin>>a[i];
        }
        for(i=c-1;i>0;i--)
        {
            if(a[i]>a[i-1])
            {
                break;
            }
        }
        d=i;
        for(d=i;d>0;d--)
        {
            if(a[d]<a[d-1])
            {
                break;
            }
        }
        cout<<d<<endl;
    }
    return 0;
}
