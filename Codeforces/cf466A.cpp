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

   int n,m,a,c,d,e,f,i,g,x,y;
   cin>>n>>m>>a>>c;
   if(m>=n)
   {
       cout<<min(n*a,c)<<endl;
       return 0;
   }
   i=n/m;
   d=n*a;
   e=(m*c)+(n-m)*a;
   g=i*c+(n%m)*a;
   y=(n/m+1)*c;
   x=min(d,min(g,min(e,y)));
   cout<<x<<endl;
   return 0;
}

