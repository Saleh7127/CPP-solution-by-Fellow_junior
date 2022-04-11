#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
string multi(string nums1,string nums2)
{
    int l1 = nums1.size();
    int l2 = nums2.size();
    string str( l1 + l2, '0');
    for(int i = l1-1; i >= 0; i--)
    {
        for(int j = l2-1; j >= 0; j--)
        {
            int p = (nums1[i]-'0')*(nums2[j]-'0') + (str[i+j+1]-'0');
            str[i+j+1] = p%10 + '0';
            str[i+j] += p/10;
        }
    }
    for(int i = 0; i < l1+l2; i++)
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
   cin.tie(0);cout.tie(0);


   ll a,d,e,i,j,k,l;
   string c;
   while(cin>>a>>c)
   {
       string x="1";
       string y="0";
       for(i=1;i<=a;i++)
       {
           string x="1";
           for(j=1;j<=i;j++)
           {
               x=multi(x,c);
           }
           x=multi(x,to_string(i));
           y=addd(y,x);
       }
       cout<<y<<endl;
   }

   return 0;
}
