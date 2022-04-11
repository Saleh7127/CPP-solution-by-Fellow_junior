#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   test
   {
       string a;
       int i,j,k,l,c=0,d=0,e;
       cin>>a;
       for(i=0;i<a.size();i++)
       {
           if(a[i]=='0') c++;
           else d++;
       }
       k=min(c,d);
       if(k%2) cout<<"DA\n";
       else cout<<"NET\n";

   }


   return 0;
}
