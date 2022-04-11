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
       char ch;
       ll i,j,k,l,c,d,e,f,r=0,s=0,p=0;
       cin>>a;
       for(i=0;i<a.size();i++)
       {
           if(a[i]=='R') r++;
           else if(a[i]=='P') p++;
           else s++;
       }
       l=max({r,p,s});
       if(l==r) ch='P';
       else if(l==p) ch='S';
       else ch='R';
       for(i=0;i<a.size();i++)
       {
           cout<<ch;
       }
       cout<<endl;
   }


   return 0;
}
