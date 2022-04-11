#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll n,x,y,i,j,k,l=0,m,d,c=0;
       cin>>n>>x>>y;
       k=y-x;
       while(1)
       {
           l++;
           m=0;
           if(k%l==0)
           {
               for(i=x; ;i+=l)
               {
                   m++;
                   if(i==y && m<=n)
                   {
                       c=1;
                       break;
                   }
                   if(i>y) break;
               }

           }
           if(c==1)
           {
               d=l;
               break;
           }
       }
       for(i=x;i<=y;i+=d)
       {
           n--;
           cout<<i<<" ";
       }
       if(n==0)
       {
           cout<<endl;
           continue;
       }
       for(i=x-d; ;i-=d)
       {
           if(i<=0) break;
           cout<<i<<" ";
           n--;
           if(n==0) break;
       }
       if(n==0)
       {
           cout<<endl;
           continue;
       }
       for(i=y+d; ;i+=d)
       {
           cout<<i<< " ";
           n--;
           if(n==0)
           {
               cout<<endl;
               break;
           }
       }
   }
   return 0;
}
