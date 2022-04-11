#include <bits/stdc++.h>
using namespace std;
#define maX 1000008
#define ll long long
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll xx;

   cin>>xx;

   if(xx%2==0)
   {
       cout<<((xx/2)+1)*((xx/2)+1)<<endl;

   }

   else if(xx%2)
   {
      cout<<2*((xx/2)+2)*((xx/2)+1)<<endl;
   }
   return 0;
}






