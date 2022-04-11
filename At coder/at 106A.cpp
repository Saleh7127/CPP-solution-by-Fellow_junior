#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,a,c,d,e=1,f,i,j=1;
    cin>>n;

    ll x[100]={0},y[100]={0};

    x[0]=1;
    y[0]=1;
    for(i=1; i<=37; i++)
    {
        e*=3;
        x[i]=e;
    }
    for(i=1; i<=25; i++)
    {
        j*=5;
        y[i]=j;
    }
    for(i=1;i<38;i++)
    {
        a=n-x[i];
        if(a>0)
        {
            for(j=1;j<26;j++)
            {
                if(y[j]==a)
                {
                    cout<<i<<" "<<j<<endl;
                    return 0;
                }
            }
        }
        else break;
    }
    for(i=1;i<26;i++)
    {
        a=n-y[i];
        if(a>0)
        {
            for(j=1;j<38;j++)
            {
                if(x[j]==a)
                {
                    cout<<j<<" "<<i<<endl;
                    return 0;
                }
            }
        }
        else break;
    }
    cout<<-1<<endl;
    return 0;
}
