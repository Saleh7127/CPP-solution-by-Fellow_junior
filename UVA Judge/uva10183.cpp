#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

string fiv[10000];

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

    return sum;
}

void fivonacci()
{
    fiv[0]="0";
    fiv[1]="1";
    for(ll i=2; i<=1000; i++)
    {
        fiv[i]=addd(fiv[i-1],fiv[i-2]);
    }
}

bool check1(string a,string c)
{
    ll i,j;

    if(a.size()!=c.size())
    {
        if(a.size()>c.size()) return 1;
        else return 0;
    }
    for(i=0; i<a.size(); i++)
    {
        if(a[i]!=c[i])
        {
            if(a[i]>c[i]) return 1;
            else return 0;
        }
    }

    return 1;
}

bool check2(string a,string c)
{
    ll i,j;

    if(a.size()!=c.size())
    {
        if(a.size()>c.size()) return 0;
        else return 1;
    }
    for(i=0; i<a.size(); i++)
    {
        if(a[i]!=c[i])
        {
            if(a[i]>c[i]) return 0;
            else return 1;
        }
    }

    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    fivonacci();

    string a,c;
    ll i,j,k,l;
    while(cin>>a>>c)
    {
        l=0;
        if(a=="0" && c=="0") break;
        for(i=2; i<800; i++)
        {
            if(check1(fiv[i],a) && check2(fiv[i],c))
            {
                l++;
            }
        }
        cout<<l<<endl;
    }

    return 0;
}
