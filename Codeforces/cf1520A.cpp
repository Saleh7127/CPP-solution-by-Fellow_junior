#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
map<char,ll>x;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {

       ll n,m,i,j,k,l;

       string a;
       x.clear();

       cin>>n>>a;

       l=0;

       char ss;

       for(i=0;i<n;i++)
       {


           if(a[i]==a[i+1]) continue;

           if (x[a[i]]!=0)
           {
               l=1;
               break;
           }
           x[a[i]]=1;
       }
       if(x[a[i]]) l=1;

       if(l) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
   }


   return 0;
}
