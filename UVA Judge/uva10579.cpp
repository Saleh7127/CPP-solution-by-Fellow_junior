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
    for(ll i=2; i<=5000; i++)
    {
        fiv[i]=addd(fiv[i-1],fiv[i-2]);
    }
}

int main()
{
    fivonacci();

    ll a;
    while(cin>>a)
    {
        cout<<fiv[a]<<endl;
    }

}
