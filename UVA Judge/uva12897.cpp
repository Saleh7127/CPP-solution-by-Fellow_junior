#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

       map<char,char>x;

       string a;
       char b,c;
       x.clear();
       ll n,i,j,k,l;

       cin>>a;
       cin>>n;

       for(i=0;i<a.size();i++)
       {
           x[a[i]]=a[i];
       }

       for(i=0;i<n;i++)
       {
           cin>>b>>c;
           for(char s='A';s<='Z';s++)
           {
               if(x[s]==c)
               {
                   x[s]=b;
               }
           }
       }
       for(i=0;i<a.size();i++)
       {
           cout<<x[a[i]];
       }
       cout<<endl;
   }


   return 0;
}
