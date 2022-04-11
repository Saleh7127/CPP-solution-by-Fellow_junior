#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

ll factor(ll n,ll c,ll t)
{
     return t*(c-t*n);
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
        ll n,c,x1,x2,x3,a1,a2,a3;


        cin>>n>>c;

        cout<<"Case "<<cs<<": ";

        if(n==0)
        {
             cout<<0<<endl;
             continue;
        }

        //x=-(b/2a) as b=1 and c =0 for ax^2 + bx + c;

        x1= c/(2*n);
        x2= 1 + c/(2*n);
        x3= c/(2*n) - 1;

        //as we want int max value that's why x-1,x,x+1;

        a1=factor(n,c,x1);
        a2=factor(n,c,x2);
        a3=factor(n,c,x3);

        if(max(a1,max(a2,a3))==a1) cout<<x1<<endl;
        else if(max(a1,max(a2,a3))==a2) cout<<x2<<endl;
        else if(max(a1,max(a2,a3))==a3) cout<<x3<<endl;

   }


   return 0;
}
