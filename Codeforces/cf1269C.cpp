#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll n,k,c,d,e,f,i,j,l;
char x[200005];
ll a[200005],b[200005];
ll ss()
{
    for(i=1; i<=n; i++)
    {
        if(a[i]>b[i]) return 0;
        if(a[i]<b[i]) return 1;
    }
    return 1;
}
int main()
{



    cin>>n>>k;

    scanf("%s",x);
    l=strlen(x);

    for(i=0; i<l; i++)
    {
        a[i+1]=x[i]-'0';
    }

    for(i=1; i<=k; i++)
    {
        b[i]=a[i];
    }
    for(i=k+1; i<=n; i++)
    {
        b[i]=b[i-k];
    }
    e=ss();
    if(e)
    {
        cout<<n<<endl;
        for(i=1; i<=n; i++)
        {
            cout<<b[i];
        }
        cout<<endl;
    }
    else
    {
        for(i=k; i>=1; i--)
        {
            if(b[i]==9) b[i]=0;
            else
            {
                b[i]++;
                break;
            }
        }
        for(i=k+1; i<=n; i++)
        {
            b[i]=b[i-k];
        }
        cout<<n<<endl;
        for(i=1; i<=n; i++)
        {
            cout<<b[i];
        }
        cout<<endl;
    }


    return 0;
}
