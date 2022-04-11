#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   test
   {
       ll a[200000],c,d=0,e,f,i,j,k,l=0,x;
       cin>>c>>x;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       sort(a,a+c);

       for(i=c-1;i>=0;i--)
       {
           if((l+1)*a[i]>=x)
           {
               d++;
               l=0;
           }
           else l++;
       }
       cout<<d<<endl;
   }
   return 0;
}
