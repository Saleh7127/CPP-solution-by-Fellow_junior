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


        ll n,m,j,i,k,l,Sn,a;

        cin>>n;

        if(n<=2)
        {
             cout<<"IMPOSSIBLE"<<endl;
             continue;
        }

        if(n%2)
        {
             cout<<n<<" = "<<n/2<<" + "<<1+n/2<<endl;
             continue;
        }

        m=n;

        while(m%2==0) m/=2;

        if(m==1)
        {
             cout<<"IMPOSSIBLE"<<endl;
             continue;
        }

        for(i=3;;i++)
        {
             /// a= first element

             /// Sn= n/2 * {2a+n(n-1)d};

             /// a={Sn-(n(n-1)*d/2}/n;

             a=(n-(i*(i-1))/2)/i;

             Sn=(a*i+(i*(i-1))/2);

             if(Sn==n)
             {
                  break;
             }
        }

        cout<<n<<" = "<<a;

        for(j=0;j<i-1;j++)
        {
             cout<<" + "<<++a;
        }
        cout<<endl;
   }

   return 0;
}
