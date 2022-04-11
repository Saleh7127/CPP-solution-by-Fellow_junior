#include <bits/stdc++.h>
using namespace std;
#define ll long long
//#define endl "\n"
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char a[20000];
    ll n,m,i,j,k,l;

    while(gets(a))
    {
        if(sscanf(a,"%lld %lld",&n,&m)==2)
        {
            l=0;
            if(n>m) swap(n,m);
            for(i=n; i<=m; i++)
            {
                if(i%4==2) l++;
            }

            cout<<l<<endl;
        }
        else
        {
            if(n>=0)
            {
                n=abs(n);

                if(n%4==2)
                {
                    cout<<"Bachelor Number."<<endl;
                }
                else if(n%2)
                {
                    cout<<(n+1)/2<<" "<<n/2<<endl;
                }
                else
                {
                    cout<<(n/4)+1<<" "<<(n/4)-1<<endl;
                }
            }
            else
            {
                n=abs(n);

                if(n%4==2)
                {
                    cout<<"Bachelor Number."<<endl;
                }
                else if(n%2)
                {
                    cout<<n/2<<" "<<(n+1)/2<<endl;
                }
                else
                {
                    cout<<(n/4)-1<<" "<<(n/4)+1<<endl;
                }
            }
        }
    }

    return 0;
}
