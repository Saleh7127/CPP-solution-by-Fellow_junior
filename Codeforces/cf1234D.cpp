#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

struct store
{
    ll c[27]={0};
};

store tree[400005];
string x;
ll ans[30];

void treeconstruct(ll node,ll b,ll e)
{
    if(b==e)
    {
        tree[node].c[x[b]-97]++;
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;
    ll mid=(b+e)/2;

    treeconstruct(left,b,mid);
    treeconstruct(right,mid+1,e);

    for(ll i=0; i<26; i++)
    {
        tree[node].c[i] = tree[left].c[i] + tree[right].c[i];
    }

}

void update(ll node,ll b,ll e,ll i,char ch)
{
    if(i>e || i<b) return;

    if(b==e)
    {
        tree[node].c[x[b]-97]--;
        tree[node].c[ch-97]++;
        x[b]=ch;
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;
    ll mid=(b+e)/2;

    update(left,b,mid,i,ch);
    update(right,mid+1,e,i,ch);

    for(ll i=0; i<26; i++)
    {
        tree[node].c[i] = tree[left].c[i] + tree[right].c[i];
    }
}

void queries(ll node,ll b,ll e,ll i,ll j)
{
    if(i>e || j<b) return;

    if(b>=i && e<=j)
    {
        for(ll i=0; i<26; i++)
        {
            ans[i]+=tree[node].c[i];
        }
        return;
    }

    ll left = node*2;
    ll right = node*2 + 1ll;
    ll mid=(b+e)/2;

    queries(left,b,mid,i,j);
    queries(right,mid+1,e,i,j);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,q,i,j,k,l;
    char cc;

    cin>>x>>q;

    n=x.size()-1;

    treeconstruct(1,0,n);

    while(q--)
    {
         cin>>i;
         if(i==1)
         {
              cin>>j>>cc;
              j--;
              update(1,0,n,j,cc);
         }
         else
         {
              cin>>j>>k;
              j--,k--;

              for(i=0;i<27;i++) ans[i]=0;

              queries(1,0,n,j,k);
              m=0;
              for(i=0;i<26;i++)
              {
                   if(ans[i])
                   {
                        m++;
                   }
              }

              cout<<m<<endl;
         }
    }

    return 0;
}
