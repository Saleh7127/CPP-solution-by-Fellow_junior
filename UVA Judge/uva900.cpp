#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   ll a[500],c,d,i,j,k;
   a[1]=1;
   a[2]=2;
   for(i=3;i<=50;i++)
   {
       a[i]=a[i-1]+a[i-2];
   }
   while(cin>>c &&c)
   {
       cout<<a[c]<<endl;
   }
   return 0;
}
