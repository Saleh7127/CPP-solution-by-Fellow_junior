#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
string fact[10005],sum[10005];

string div(string a,ll x)
{
    ll r=0,i,j,k,l;
    string s;
    for(i=0; i<a.size(); i++)
    {
        r=r*10+a[i]-'0';
        s+=(r/x)+'0';
        r%=x;
    }
    for(i = 0; i <s.size(); i++)
    {
        if(s[i]!= '0')
        {
            return s.substr(i);
        }
    }
    return "0";
}

string addd(string a,string c)
{

    ll s1,s2,l,i,j,k=0;
    string sum="";

    reverse(a.begin(),a.end());
    reverse(c.begin(),c.end());

    s1=a.size();
    s2=c.size();
    l=max(s1,s2);

    for(i=0; i<l; i++)
    {
        if(i<s1)
        {
            k+=(a[i]-'0');
        }
        if(i<s2)
        {
            k+=(c[i]-'0');
        }
        sum+=((k%10)+'0');
        k/=10;
    }

    if(k)
    {
        sum+=(k+'0');
    }
    reverse(sum.begin(),sum.end());

    for(i = 0; i <sum.size(); i++)
    {
        if(sum[i]!= '0')
        {
            return sum.substr(i);
        }
    }
    return "0";
}

void precal()
{
    fact[0]=fact[1]=fact[2]="1";
    sum[0]=sum[1]="0",sum[2]="1";
    for(ll i=3;i<=1505;i++)
    {
        fact[i]=addd(fact[i-1],fact[i-2]);
        sum[i]=addd(fact[i],sum[i-1]);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    precal();

    ll n,c=1,i;
    while(cin>>n && n)
    {
        cout<<"Set "<<c++<<":"<<endl;
        if(n==1) cout<<0<<endl;
        else
        {
            string xx;
            xx=addd(sum[n-1],div(addd("1",fact[n]),2));
            cout<<xx<<endl;
        }

    }


    return 0;
}
