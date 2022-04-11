#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

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

    return sum;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll c,d,i,j,k,l=0;

    while(cin>>c>>d && c && d)
    {
        string a,x;
        while(c--)
        {
            cin>>a;
            x=addd(x,a);
        }
        cout<<"Bill #"<<++l<<" costs "<<x<<": each friend should pay "<<div(x,d)<<endl<<endl;
    }


    return 0;
}
