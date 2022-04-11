#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1)
#define yes printf("YES\n");
#define no printf("NO\n");
int main()
{
   Faster
   ll a[100000],c,d=-100,e[1000],f,i,j=0,k,l=1;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
       if(a[i]>d) d=a[i];
   }
   cout<<d<<" ";
   sort(a,a+c);
   for(i=c-2;i>=0;i--)
   {
       if(a[c-1]%a[i]!=0 || a[i+1]==a[i])
       {
           cout<<a[i];
           return 0;
       }
   }
   return 0;
}
