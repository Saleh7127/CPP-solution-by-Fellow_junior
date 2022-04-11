#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

string ans[3005];
string f[3005];
string cat[3005];

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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,i,j,k,l;
    string x,y,z;

    f[0]="1";

    for(i=1;i<2002;i++)
    {
         x=to_string(i);
         f[i]=multi(f[i-1],x);
    }

    cat[0]=cat[1]="1";


    for(i=2;i<1001;i++)
    {
         cat[i]
    }

    while(cin>>n && n)
    {
         cout<<ans[n]<<endl;
    }

    return 0;
}

