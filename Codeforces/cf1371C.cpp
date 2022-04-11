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
       cin>>a>>c>>d>>e;
       if(a>c)
       {
          swap(a,c);
       }
       if(a<e)
       {
           cout<<"No"<<endl;
       }
       else if((a+c)<(d+e)) cout<<"No"<<endl;
       else cout<<"Yes"<<endl;
   }
   return 0;
}
