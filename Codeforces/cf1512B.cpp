#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll n,m,i,j,k=0,l,x,y,z,w,a,b,c,d;

       cin>>n;
       char s,q[n+5][n+5];



       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               cin>>s;
               q[i][j]=s;
               if(k==0 && q[i][j]=='*') k=1,w=i,x=j;
               if(k==1 && q[i][j]=='*') k=1,y=i,z=j;

           }
       }
       if(w==y)
       {
           if(w==0) a=w+1,b=x,c=w+1,d=z;
           else a=w-1,b=x,c=w-1,d=z;
       }
       else if(x==z)
       {
           if(x==0) a=w,b=x+1,c=y,d=x+1;
           else a=w,b=x-1,c=y,d=x-1;
       }
       else
       {
           a=y,b=x,c=w,d=z;
       }
       q[a][b]='*';
       q[c][d]='*';


       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               cout<<q[i][j];
           }
           cout<<endl;
       }
   }


   return 0;
}
