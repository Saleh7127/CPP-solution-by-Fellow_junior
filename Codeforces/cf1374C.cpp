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
       string a;
       ll c,d=0,e,f,i,j,k,l;
       cin>>c>>a;
       for(i=0;i<c;i++)
       {
           if(a[i]=='(')
           {
               for(j=i+1;j<c;j++)
               {
                   if(a[j]==')')
                   {
                       a[i]='0';
                       a[j]='0';
                       break;
                   }
               }

           }
       }
       for(i=0;i<c;i++)
       {
           if(a[i]=='(' || a[i]==')')
           {
               d++;
           }
       }
       cout<<d/2<<endl;
   }
   return 0;
}
