#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define loop(i,c) for(i=0;i<c;i++)
int main()
{
   ll a[10000],c,d,e,o,f,i,j,k,l;
   test
   {
       e=0,o=0,d=0;
       cin>>c;
       loop(i,c)
       {
           cin>>a[i];
           if(a[i]%2) o++;
           else e++;
       }
       if(o%2==0 && e%2==0) printf("YES\n");
       else if(o%2==1 && e%2==0) printf("NO\n");
       else if(o%2==0 && e%2==1) printf("NO\n");
       else
       {
           sort(a,a+c);
           for(i=0;i<c-1;i++)
           {
               if(a[i+1]-a[i]==1)
               {
                   d=1;
                   break;
               }
           }
           if(d) printf("YES\n");
           else printf("NO\n");
       }
   }
   return 0;
}
