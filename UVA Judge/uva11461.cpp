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
   ll a,c,d,e,f,i,j,k,l;
   while(cin>>a>>c && a &&c)
   {
       e=0;
       for(i=a;i<=c;i++)
       {
           d=sqrt(i);
           if(d*d==i)
           {
               e++;
           }
       }
       cout<<e<<endl;
   }
   return 0;
}
