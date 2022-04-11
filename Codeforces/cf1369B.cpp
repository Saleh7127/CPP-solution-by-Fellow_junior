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

       ll n,c=-2,d=-2,e,f,i,j,k,l;
       string a;
       cin>>n;
       cin>>a;

       for(i=0;i<n;i++)
       {
           if(a[i]=='1')
           {
               c=i;
               break;
           }
       }
       for(i=n-1;i>=0;i--)
       {
           if(a[i]=='0')
           {
               d=i;
               break;
           }
       }
       if(d<c)
       {
           cout<<a<<endl;
           continue;
       }
       if(c<0 || d<0)
       {
           cout<<a<<endl;
           continue;
       }
       for(j=0;j<c;j++)
       {
           cout<<a[j];
       }
       cout<<0;
       for(j=n-1;j>d;j--)
       {
           cout<<a[j];
       }
       cout<<endl;

   }


   return 0;
}
