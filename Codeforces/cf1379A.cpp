#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   test
   {
       string a,c="";
       ll d,e,f,i,j,k,l;
       cin>>d>>a;
       for(i=0;i<d;i++)
       {
           if(a[i]=='a' || a[i]=='?')
           {
               e=1;
               if(a[i])
               if(e==4)
               {
                   f=0;
                   for(j=i+1;j<d && f<=3;j+=2)
                   {
                       if(a[j]=='b' && j==i+1) f++;
                       else if(a[j]=='?' && f==0 && j==i+1)
                       {
                           a[j]='b'
                           f++;
                       }
                       else if(a[j]=='c' && j==i+3) f++;
                       else if(a[j]=='?' && f==1 && j==i+3)
                       {
                           a[j]='c'
                           f++;
                       }
                       else if(a[j]=='b' && j==i+5) f++;
                       else if(a[j]=='?' && f==2 && j==i+5)
                       {
                           a[j]='b'
                           f++;
                       }
                   }
               }
               if(e==4 && f==3)
               {
                   for(k=0;k<d;k++)
                   {
                       if(a[k]=='?')
                       {
                           a[k]='x';
                       }
                   }
               }
           }
       }
       for(i=0;i<d;i++)
       {
           if(a[i]=='a')
           {
               for(j=i+1)
           }
       }
   }

   return 0;
}
