#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int n,a,c,d,e;

   while(cin>>n && n)
   {
      a=1;
      while(a*2<=n)
      {
          a*=2;
      }
      if(a-n==0)
      {
          cout<<n<<endl;
      }
      else cout<<(n-a)*2<<endl;
   }
   return 0;
}
