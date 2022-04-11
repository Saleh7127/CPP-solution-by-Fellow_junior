#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   map<string,bool>aa;
   int n,i,j,k,l;
   cin>>n;
   string a[n+10];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=n-1;i>=0;i--)
   {
       if(aa[a[i]]!=true)
       {
           cout<<a[i]<<endl;
           aa[a[i]]=true;
       }
   }

   return 0;
}
