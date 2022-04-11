#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll z,i,m,l,j,k,c,d,e=0;
   while(cin>>z>>i>>m>>l && z && i && m && l)
   {
       ll a[100005]={0};
       c=0;
       l=(z*l+i)%m;
       while(a[l]==0)
       {
           c++;
           a[l]=1;
           l=(z*l+i)%m;
       }
       cout<<"Case "<<++e<<": "<<c<<endl;
   }


   return 0;
}
