#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n=0,dis,city,ans=10000,i,j,k;
   string a;
   char cr[105][8];
   map<char,int>x;
   x['r']=0;
   x['o']=1;
   x['y']=2;
   x['g']=3;
   x['b']=4;
   while(cin>>a)
   {
       if(a[0]=='#') break;
       else if(a[0]=='e')
       {
           for(i=0;i<n;i++)
           {
               dis=0;
               for(j=0;j<n;j++)
               {
                   for(k=0;k<5;k++)
                   {
                       if(cr[i][k]!=cr[j][k])
                       {
                           dis++;
                       }
                   }
               }
               if(dis<ans)
               {
                   ans=dis;
                   city=i+1;
               }
           }
           cout<<city<<endl;
           ans=10000;
           n=0;
       }
       else
       {
           cr[n][x[a[0]]]=a[2];
           cr[n][x[a[4]]]=a[6];
           cr[n][x[a[8]]]=a[10];
           cr[n][x[a[12]]]=a[14];
           cr[n][x[a[16]]]=a[18];
           n++;
       }
   }


   return 0;
}
