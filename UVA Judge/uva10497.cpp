#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
string f[20005];
string multi(string nums1,string nums2)
{
    ll l1 = nums1.size();
    ll l2 = nums2.size();

    ll i,j;

    string str( l1 + l2, '0');

    for(i=l1-1; i>= 0; i--)
    {
        for(j=l2-1; j>= 0; j--)
        {
            ll p = (nums1[i]-'0')*(nums2[j]-'0') + (str[i+j+1]-'0');
            str[i+j+1] = p%10 + '0';
            str[i+j] += p/10;
        }
    }
    for(i=0; i<l1+l2; i++)
    {
        if(str[i]!= '0')
        {
            return str.substr(i);
        }
    }
    return "0";
}


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

string subtract(string str1, string str2)
{
    if (str1<str2)
    {
        swap(str1, str2);
    }
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

void fib()
{
    int i;
    f[0]="0",f[1]="0",f[2]="1";
    for(i=3;i<=1000;i++)
    {
        f[i]=addd(f[i-1],f[i-2]);
        string a=to_string(i-1);
        f[i]=multi(a,addd(f[i-1],f[i-2]));
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    fib();
    string x[2000];
    string a,c;


    int b;
    while(cin>>b && b!=-1)
    {
        cout<<f[b]<<endl;
    }


    return 0;
}
