#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
string f[10000];

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

string subtract(string str1, string str2)
{

    string str;

    ll n1 = str1.length();
    ll n2 = str2.length();

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    ll carry=0,i,sub;

    for (i = 0; i < n2; i++)
    {
        sub= ((str1[i] - '0') - (str2[i] - '0') - carry);
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }

        str+=(sub+'0');
    }

    for (i=n2; i < n1; i++)
    {
        sub=((str1[i] - '0') - carry);
        if (sub<0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }

        str+=(sub+'0');
    }

    reverse(str.begin(), str.end());

    for(i=0; i<str.size(); i++)
    {
        if(str[i]!= '0')
        {
            return str.substr(i);
        }
    }
    return "0";
}
bool great(string s1, string s2)
{
    ll n = s1.size();
    ll m = s2.size();

    if(n>m)
        return true;
    else if(n<m)
        return false;
    else
    {
        if(s1>=s2)
            return true;
        else
            return false;
    }
}
void fivonacci()
{
    f[0]="1";
    f[1]="1";
    f[2]="2";
    for(ll i=3; i<=130; i++)
    {
        f[i]=addd(f[i-1],f[i-2]);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    fivonacci();


    string a,b;
    ll i,j=0,k,l;

    while(cin>>a>>b)
    {

        if(j) cout<<endl;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        string c="0",d="0",e="";

        for(i=0; i<a.size(); i++)
        {
            if(a[i]=='1')
            {
                c=addd(c,f[i+1]);
            }
        }

        for(i=0; i<b.size(); i++)
        {
            if(b[i]=='1')
            {
                d=addd(d,f[i+1]);
            }
        }
        e=addd(c,d);
        string ss="";
        k=0;
        for(i=110;i>=1;i--)
        {
            if(great(e, f[i]))
            {
                ss+='1';
                string x=subtract(e,f[i]);
                e.clear();
                e=x;
                k=1;
            }
            else
            {
                if(k) ss+='0';
            }
        }
        if(ss=="") ss="0";
        cout<<ss<<endl;
        j=1;
    }


    return 0;
}
