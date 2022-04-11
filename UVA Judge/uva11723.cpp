#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   ll a,c,n,r,i,j,k,l=1;
   while(cin>>r>>n &&r &&n)
   {
       j=1;
       cout<<"Case "<<l<<": ";
       for(i=1;i<=27;i++)
       {
           if(n*i>=r)
           {
               cout<<i-1<<endl;
               j=0;
               break;
           }
       }
       if(j) cout<<"impossible"<<endl;
       l++;
   }
   return 0;
}
