#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   ll a[200005],c,d,e,f,i,j,k,l;
   test
   {
       l=0;
       e=0;
       f=0;
       j=0;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       sort(a,a+c);
       for(i=0;i<c;i++)
       {
           e++;
           if(e>=a[i])
           {
               l=e;
           }
       }
       cout<<l+1<<endl;
   }
   return 0;
}
