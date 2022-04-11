#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1)
int main()
{
   Faster
   ll a,c,d,e,f,i,j,k,l;

   while(cin>>a && a)
   {
       c=0;
        for(i=1; i<a; i++)
        {
            for(j=i+1; j<=a; j++)
            {
                c+=__gcd(i,j);
            }
        }
        cout<<c<<endl;
   }

   return 0;
}
