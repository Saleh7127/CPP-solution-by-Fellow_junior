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
       ll c,d,e,f,i,j,k,l;
       string a;

       cin>>a;
       vector<ll>x;
       c=0;
       for(i=0;i<a.size();i++)
       {
           if(a[i]=='1')
           {
               c++;
           }
           else
           {
               x.push_back(c);
               c=0;
           }
       }
       if(c) x.push_back(c);
       c=0;
       sort(x.begin(),x.end());
       for(i=x.size()-1;i>=0;i-=2)
       {
           c+=x[i];
       }
       cout<<c<<endl;
   }


   return 0;
}
