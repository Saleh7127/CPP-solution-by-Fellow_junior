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
       if(c==d && c>=a)
       {
           cout<<"YES"<<endl;
           cout<<a<<" "<<a<<" "<<d<<endl;
       }
       else if(a==c && a>=d)
       {
           cout<<"YES"<<endl;
           cout<<a<<" "<<d<<" "<<d<<endl;
       }
       else if(a==d && a>=c)
       {
           cout<<"YES"<<endl;
           cout<<c<<" "<<a<<" "<<c<<endl;
       }
       else cout<<"NO"<<endl;
   }
   return 0;
}
