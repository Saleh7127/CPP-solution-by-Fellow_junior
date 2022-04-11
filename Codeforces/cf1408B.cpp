#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

        ll a[1000],c,d,e=1,f,i,j,k=0,l;
        cin>>c>>k;
        for(i=0; i<c; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<c; i++)
        {
            if(a[i]!=a[i-1])
            {
                e++;
            }
        }
        if(k==1 && e>1)
        {
            cout<<-1<<endl;
        }
        else
        {
            d=1;
            e-=k;
            while(e>0)
            {
                e-=k-1;
                d++;
            }
            cout<<d<<endl;
        }
    }
    return 0;
}
