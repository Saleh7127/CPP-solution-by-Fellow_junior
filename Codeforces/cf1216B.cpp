#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   int c,d=0,e,f,i,j,k,l;
   cin>>c;
   pair<int,int>a[c];
   for(i=0;i<c;i++)
   {
       cin>>a[i].first;
       a[i].second=i+1;
   }
   sort(a,a+c);
   reverse(a,a+c);
   for(i=0;i<c;i++)
   {
       d+=(a[i].first*i+1);
   }
   cout<<d<<endl;
   for(i=0;i<c;i++)
   {
       printf("%d ",a[i].second);
   }
   return 0;
}
