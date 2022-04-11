#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   ll a=0,c=0,d=0,e=0,i,j,k,l;
   string x;
   test
   {
       cin>>x;
       if(x[0]=='A') a++;
       if(x[0]=='W') c++;
       if(x[0]=='T') d++;
       if(x[0]=='R') e++;
   }
   cout<<"AC"<<" x "<<a<<endl;
   cout<<"WA"<<" x "<<c<<endl;
   cout<<"TLE"<<" x "<<d<<endl;
   cout<<"RE"<<" x "<<e<<endl;

   return 0;
}
