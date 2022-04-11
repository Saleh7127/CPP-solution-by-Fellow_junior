#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int t,n,k;
   cin>>t;
   while(t--)
   {
       cin>>n>>k;
       if(n==k) cout<<0<<endl;
       else if(n<k)
       {
          cout<<abs(n-k)<<endl;
       }
       else
       {
           if(n%2==0 && k%2==0) cout<<0<<endl;
           else if(n%2==1 && k%2==0) cout<<1<<endl;
           else if(n%2==0 && k%2==1) cout<<1<<endl;
           else if(n%2==1 && k%2==1) cout<<0<<endl;
       }
   }

   return 0;
}
