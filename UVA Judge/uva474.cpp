#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

double f3[1000005];

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   f3[0]=1;

   for(int i=1;i<=1000000;i++)
   {
        f3[i]=f3[i-1]*5;

        while(f3[i]>=10)
        {
             f3[i]/=10;
        }
   }

   int n,digit;

   while(cin>>n)
   {
        digit=n*log10(2)+1; ///number of digit in 2^-n;

        cout<<"2^-"<<n<<" = "<<fixed<<setprecision(3)<<f3[n]<<"e-"<<digit<<endl;;
        ///pow(10, log10(2)*(-n)-digit);
   }

   return 0;
}
