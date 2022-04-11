#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct x{

    ll fst,scnd;

}a[50];
ll c,d,e,x,y,n,f,ans,used[50],crnt[50];

void backtracking(ll indx)
{

    if(indx==n)
    {
        ll mx=abs(x-a[crnt[0]].fst)+abs(y-a[crnt[0]].scnd);
        for(ll i=1;i<n;i++)
        {
            mx+=abs(a[crnt[i-1]].fst-a[crnt[i]].fst)+abs(a[crnt[i-1]].scnd-a[crnt[i]].scnd);
        }
        mx+=abs(x-a[crnt[n-1]].fst)+abs(y-a[crnt[n-1]].scnd);
        if(mx<ans)
        {
            ans=mx;
        }
        return ;
    }
    for(ll i=0;i<n;i++)
    {
        if(used[i]==0)
        {
            used[i]=1;
            crnt[indx]=i;
            backtracking(indx+1);
            used[i]=0;
        }
    }
    return;
}


int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll t;
   cin>>t;
   while(t--)
   {

       cin>>c>>d;
       cin>>x>>y;
       cin>>n;
       ans=1000000000;
       for(ll i=0;i<n;i++)
       {
           cin>>a[i].fst>>a[i].scnd;
       }
       backtracking(0);

       cout<<"The shortest path has length "<<ans<<endl;
   }



   return 0;
}
