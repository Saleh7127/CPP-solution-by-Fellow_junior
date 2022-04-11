#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   string a,c;
   ll d,r,f,i,j,k,l;
   cin>>a>>c;
   i=a.size();
   j=c.size();
   while(i>0 and j>0 and a[i-1]==c[j-1])
   {
       i--,j--;
   }
   cout<<i+j<<endl;
   return 0;
}
