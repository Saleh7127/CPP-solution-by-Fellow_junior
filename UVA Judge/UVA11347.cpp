#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define inf 1e18
vector<ll>prime;
map<ll,ll>fre;

void fact(ll n)
{
    if(n%2==0)
    {
        if(fre[2]==0) prime.push_back(2);
        while(n%2==0)
        {
            fre[2]++;
            n/=2;
        }
    }
    for(ll i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
        {
            if(fre[i]==0) prime.push_back(i);
            while(n%i==0)
            {
                fre[i]++;
                n/=i;
            }
        }
    }
    if(n>1)
    {
        if(fre[n]==0) prime.push_back(n);
        fre[n]++;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {

        ll n=0,m,i,j,k=0,l=0,ans=1;
        string a;
        cin>>a;

        for(i=0; i<a.size(); i++)
        {
            if(a[i]=='!') l++;
            else
            {
                n*=10;
                n+=(a[i]-'0');
            }
        }

        prime.clear();
        fre.clear();

        for(i=n; i>1; i-=l)
        {
            fact(i);
        }

        for(i=0; i<prime.size(); i++)
        {
            ans*=(fre[prime[i]]+1);

            if(ans> inf)
            {
                k=1;
                break;
            }
        }

        cout<<"Case "<<cs<<": ";

        if(k) cout<<"Infinity"<<endl;
        else cout<<ans<<endl;
    }

    return 0;
}
