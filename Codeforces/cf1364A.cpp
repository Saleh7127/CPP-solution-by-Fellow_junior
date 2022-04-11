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
   test
   {
       ll n,c=0,d,x,e=0,f=0,i,j,k=0,l=0;
       cin>>n>>x;
       ll a[n+5];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           c+=a[i];
       }
      if(c%x) cout<<n<<endl;
      else
      {
          for(i=0,j=n-1,l=1;i<n;i++,j--,l++)
          {
              e+=a[i];
              f+=a[j];
              if(e%x)
              {
                  cout<<n-l<<endl;
                  break;
              }
              if(f%x)
              {
                  cout<<n-l<<endl;
                  break;
              }
          }
          if(i==n) cout<<-1<<endl;
      }
   }
   return 0;
}
