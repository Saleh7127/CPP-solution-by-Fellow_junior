#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   ll a,c=0,d,e,f,i,j,k,l;
   cin>>a;
   while(1)
   {
       if(a==0)
       {
           cout<<c<<endl;
           return 0;
       }
       if(a%2==0)
       {
           c+=a/2;
           a=a-a;
       }
       else
       {
           d=0;
           for(i=3;i<=sqrt(a);i+=2)
           {
               if(a%i==0)
               {
                   d=1;
                   a=a-i;
                   c++;
                   break;
               }
           }
           if(d==0)
           {
               a=a-a;
               c++;
           }
       }
   }
   return 0;
}
