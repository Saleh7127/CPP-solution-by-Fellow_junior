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
       ll a,c,d,e,f,i,j,k,l;
       cin>>c>>d;
       string x="";
       for(i=0;i<c;i++)
       {
           cin>>a;
           if(a%d==0)
           {
               x+='1';
           }
           else x+='0';
       }
       cout<<x<<endl;
   }


   return 0;
}
