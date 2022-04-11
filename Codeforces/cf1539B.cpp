#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll tree[30][1000005];
void treeconstruct(ll node,ll b,ll e,ll i,ll p)
{
    if(i>e || i<b) return;

    if(b==e)
    {
        tree[p][node]+=1ll;
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    if(i<=mid) treeconstruct(left,b,mid,i,p);
    else treeconstruct(right,mid+1,e,i,p);

    tree[p][node]=(tree[p][left]+tree[p][right]);

}

ll queries(ll node,ll b,ll e,ll i,ll j,ll p)
{

    if(i>e || j<b) return 0ll;

    if(i<=b && e<=j)
    {
         return tree[p][node];
    }

    ll left = node*2;
    ll right = node*2 + 1ll;

    ll mid=(b+e)/2;

    ll x=0;

    if(i<=mid) x+=queries(left,b,mid,i,j,p);

    if(j>mid) x+=queries(right,mid+1,e,i,j,p);

    return x;

}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,q,j,k,l;

   cin>>n>>q;

   string a;
   cin>>a;

   for(i=1;i<=n;i++)
   {
        j=a[i-1]-'a';
        treeconstruct(1ll,1ll,n,i,j);
   }

   while(q--)
   {
        cin>>k>>l;

        ll ans=0;

        for(j=0;j<26;j++)
        {
             ans+=queries(1ll,1ll,n,k,l,j)*(j+1ll);
        }
        cout<<ans<<endl;
   }

   return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   map<pair<ll,char>,ll>x;

   string a,b;
   ll n,m,q,i,j,k,l=0;


   cin>>n>>q;
   cin>>a;

   for(i=0;i<n;i++)
   {
        x[{i,a[i]}]++;
        for(char zz='a';zz<='z';zz++)
        {
             x[{i,zz}]+=x[{i-1,zz}];
        }
   }

   while(q--)
   {
        l=0;

        cin>>j>>k;

        j--,k--;
        for(char zz='a';zz<='z';zz++)
        {
             ll r=x[{k,zz}]-x[{j-1,zz}];

             l+=(r*(zz-96));
        }
        cout<<l<<endl;
   }

   return 0;
}

*/

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    string a;
    ll n,m,i,j,k,l,q;


    cin>>n>>q>>a;

    vector<ll>x(n+1);

    for(i=0; i<n; i++)
    {
        x[i+1]=x[i] + a[i]-'a'+1ll;
    }
    while(q--)
    {
        cin>>j>>k;
        cout<<x[k]-x[j-1]<<endl;
    }


    return 0;
}

*/
