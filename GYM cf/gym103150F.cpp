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

        ll n,m,i,j,k,l;

        cin>>n;

        char c='a';

        while(n>0)
        {
             i=0;
             while(1)
             {
                  i++;
                  k=(i*(i+1))/2;
                  if(k>n) break;
             }
             i--;
             n-=(i*(i+1))/2;

             for(j=0;j<i;j++) cout<<c;
             c++;
        }
        cout<<endl;

   }

   return 0;
}

