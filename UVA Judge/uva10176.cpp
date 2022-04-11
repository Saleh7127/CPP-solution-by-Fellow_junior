#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
ll mod(ll a,ll c,ll m)
{
    if(c==0) return 1;
    ll x=mod(a,c/2,m);
    x=(x*x)%m;
    if(c%2==1)
    {
        x=(x*a)%m;
    }
    return x;
}
int main()
{
    char ch;
    string s="";
    while(cin>>ch)
    {
        if(ch!='#')
        {
            s+=ch;
            continue;
        }
        ll l=s.size();
        l--;
        ll ans=0;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='0') continue;
            else
            {
                ans=(ans+mod(2,l,131071))%131071;
                l--;
            }
        }
        if(ans==0) cout<<"YES\n";
        else cout<<"NO\n";
        s="";
    }
    return 0;
}
/* others solution
int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    char ch;
    int num=131071, n=0;
    while((ch=getchar()) !=EOF)
    {
        if(ch=='#')
        {
            if(n==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            n=0;
        }
        else
        {
            if(ch!='\n')
                n=(n*2+ch-48)%num;
        }
    }
    return 0;
}*/
