#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

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

    string in,a;
    vector<string>all;

    ll i,j,k,l;

    while(cin>>in && in[0]!='0')
    {
        all.push_back(in);
    }
    l=all.size();

    a=addd(all[0],all[1]);

    for(i=2;i<l;i++)
    {
        a=addd(a,all[i]);
    }
    cout<<a<<endl;
    return 0;
}
