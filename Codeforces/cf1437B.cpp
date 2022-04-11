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

       ll c,d,e,f,i,j,k=0,l=0;
       string a;
       cin>>c>>a;
       for(i=1;i<c;i++)
       {
           if(a[i]==a[i-1]) k++;
       }
       cout<<(k+1)/2<<endl;
   }


   return 0;
}
