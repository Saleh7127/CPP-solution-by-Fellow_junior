#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1)
#define yes printf("YES\n");
#define no printf("NO\n");
int main()
{
   Faster
   int n,k,a[10000]={0},c[10000],d,e,f,i,j,ans=0;
   test
   {
       cin>>n>>k;
       while(k--)
       {
           cin>>d;
           f=0;
           for(i=1;i<=n;i++)
           {
               if(i%d==0)
               {
                   a[i]++;
               }
           }
           for(j=1;j<=n;j++)
           {
               if(a[j]%2)
               {
    N               f++;
               }
           }
           ans=max(ans,f);
       }
       cout<<ans<<endl;
   }
   return 0;
}
