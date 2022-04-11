#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[1000],c[1000],d[1000],e,f,i,j,k,l;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ///!}@]

    test
    {

        cin>>e;
        for(i=0; i<e; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<e; i++)
        {
            cin>>c[i];
        }
        for(i=0; i<e; i++)
        {
            cin>>d[i];
        }
        cout<<a[0]<<" ";
        f=a[0];
        for(i=1; i<e; i++)
        {
            if(i==e-1)
            {
                j=a[0];
                if(a[i]==f || a[i]==j)
                {
                    if(c[i]==f || c[i]==j)
                    {
                        cout<<d[i]<<" ";
                        f=d[i];
                    }
                    else
                    {
                        cout<<c[i]<<" ";
                        f=c[i];
                    }
                }
                else
                {
                    cout<<a[i]<<" ";
                    f=a[i];
                }
            }
            else
            {
                if(a[i]==f)
                {
                    if(c[i]==f)
                    {
                        cout<<d[i]<<" ";
                        f=d[i];
                    }
                    else
                    {
                        cout<<c[i]<<" ";
                        f=c[i];
                    }
                }
                else
                {
                    cout<<a[i]<<" ";
                    f=a[i];
                }
            }
        }
        cout<<endl;
    }



    return 0;
}
