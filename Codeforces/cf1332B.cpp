#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int p[] = {2,3,5,7,11,13,17,19,23,29,31};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {

        ll n,a[20000],f,i,j,k=0,l=1;

        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        ll x[n+5]={0};

        for(i=0; i<11; i++)
        {
            f=0;
            for(j=0;j<n;j++)
            {
                if((a[j]%p[i])==0 && x[j]==0)
                {
                    x[j]=l;
                    f=1;
                }
            }
            if(f)
            {
                l++;
                k++;
            }
        }

        cout<<k<<endl;

        for(i=0;i<n;i++)
        {
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
