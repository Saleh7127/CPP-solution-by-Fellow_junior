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
       cin>>a>>c>>d;
       e=d%a;
       if(e==c) cout<<d<<endl;
       else if(e<c)
       {
           f=d-e-a+c;
           cout<<f<<endl;
       }
       else
       {
          f=d-(e-c);
          cout<<f<<endl;
       }
   }


   return 0;
}
