#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 ll c[2000][200]={0},d,e,f,i,j,k,l=0;
int main()
{
   fellow_junior
   string a;
   cin>>d>>e;
   for(i=0;i<d;i++)
   {
       cin>>a;
       for(j=0;j<e;j++)
       {
           c[j][a[j]]++;
       }
   }
   for(i=0;i<e;i++)
   {
       cin>>f;
       k=0;
       for(j='A';j<='E';j++)
       {
           k=max(k,c[i][j]);
       }
       l+=k*f;
   }
   cout<<l<<endl;
   return 0;
}
