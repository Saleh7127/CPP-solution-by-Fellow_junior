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
       ll a,c,d,e,f,i,j,k,l=0;
       cin>>a;
       vector<ll>x;

       for(i=1;i<=9;i++)
       {
           k=i;
           while(k!=a && k<=9999)
           {
               x.push_back(k);
               k=(k*10)+i;

           }
           if(k==a)
           {   x.push_back(k);
               break;
           }
       }
       for(i=0;i<x.size();i++)
       {
            if(x[i]==a)
            {
                l++;
                break;
            }
            else l++;
       }

       j=(l/4)*10;
       k=l%4;
       i=(k*(k+1))/2;
       cout<<j+i<<endl;
   }


   return 0;
}
