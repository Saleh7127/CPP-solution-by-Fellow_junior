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
       ll n,i,j,k,l=0;
       char a[100][100];
       cin>>n;
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               cin>>a[i][j];
           }
       }

       for(i=0;i<n-1;i++)
       {
           for(j=0;j<n-1;j++)
           {
               if(a[i][j]=='1' && a[i+1][j]=='0' && a[i][j+1]=='0')
               {
                   l=1;
                   break;
               }
           }
       }

       if(l) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
   }


   return 0;
}
