#include <bits/stdc++.h>
#define int long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
int ans = 1;
signed main()
{
    fastio
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    for(auto x : primes)
    {
        bool ok = false;
        vector<int> v;
        for(auto y : s)
        {
            if(y%x==0)
            {
                ok = 1;
                v.push_back(y);
            }
        }
        if(v.size()>=2)
        {
            for(auto y : v) s.erase(y);
            ans *= x;
        }
    }
    for(auto x : s)
    {
        for(auto y : primes)
        {
            if(x%y==0)
            {
                ans *= y;
                break;
            }
        }
    }
    cout << ans << "\n";
}

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll p[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
ll a[100],ans=1e18;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,i,j,k,l;

   cin>>n;

   for(i=1;i<=n;i++)
   {
       cin>>a[i];
   }

   for(i=1;i<(1<<15);i++)
   {
       ll c=1;
       for(j=0;j<15;j++)
       {
           if(i&(1<<j)) c*=p[j];
       }
       ll k=0;
       for(l=1;l<=n;l++)
       {
           if(__gcd(a[l],c)==1)
           {
               k=1;
               break;
           }
       }
       if(k==0) ans=min(ans,c);
   }

   cout<<ans<<endl;

   return 0;
}
*/
