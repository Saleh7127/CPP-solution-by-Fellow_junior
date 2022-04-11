#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   ll fact[20];
   ll a,c,d,e,f,i,j,k,l;
   fact[0]=1;
   fact[1]=1;
   for(i=2;i<10;i++)
   {
       fact[i]=fact[i-1]*i;
   }
   while(cin>>a && a>=0)
   {
       if(a==0)
       {
           cout<<"NO"<<endl;
           continue;
       }
       for(i=9;i>=0;i--)
       {
           if(a>=fact[i])
           {
               a-=fact[i];
           }
       }
       if(a==0) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }
   return 0;
}
