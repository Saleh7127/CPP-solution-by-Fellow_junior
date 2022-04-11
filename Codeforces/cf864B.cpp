#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   ll c,d,e,i,j,k=0,l;
   string a;
   cin>>c>>a;
   set<char>xx;
   for(i=0;i<c;i++)
   {
       if(a[i]>='a' && a[i]<='z')
       {
           xx.insert(a[i]);
           l=xx.size();
           k=max(k,l);
       }
       else
       {
           xx.clear();
       }
   }
   cout<<k<<endl;
   return 0;
}
