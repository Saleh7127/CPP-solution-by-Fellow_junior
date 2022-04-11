#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ///@!]

    test
    {
        ll a[105]={0},c,d,e=0,f=0,i,j=0,k=0,l=0,x[105]={0},y[105]={0};;
        cin>>c;
        for(i=1; i<=c; i++)
        {
            cin>>d;
            a[d]++;
            e=max(e,d);
        }
        for(i=0; i<=e; i++)
        {
            if(a[i]>1)
            {
               x[i]++;
               y[i]++;
            }
            else if(a[i]==1)
            {
                x[i]++;
            }
        }
        for(i=0; i<=100; i++)
        {
            if(x[i]==0)
            {
                f=i;
                break;
            }
        }
        for(i=0; i<=100; i++)
        {
            if(y[i]==0)
            {
                l=i;
                break;
            }
        }
        cout<<f+l<<endl;
    }

    return 0;
}
