#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   Faster

   ll t,f;
   cin>>t;
   for(f=1;f<=t;f++)
   {
       ll x,y,pos=0,c=0,i,j,k,l;
       string a;
       ll fil[65][65]={0};
       cin>>x>>y;
       cin>>a;
       fil[x][y]=1;
       l=a.size();

       for(i=0;i<l;i++)
       {
           if(a[i]=='F')
           {
               pos=pos%4;
               if(pos<0) pos+=4;

               if(pos==0) y++;
               else if(pos==2) y--;
               else if(pos==1) x++;
               else if(pos==3) x--;
               fil[x][y]++;
           }
           else if(a[i]=='R') pos++;
           else if(a[i]=='L') pos--;
       }
       for(i=0;i<65;i++)
       {
           for(j=0;j<65;j++)
           {
               if(fil[i][j]>1)
               {
                   c++;
               }
           }
       }
       printf("Case #%lld: %lld %lld %lld\n",f,x,y,c);
   }

   return 0;
}
