#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        string a;

        cin>>a;

        cout<<"Case "<<cs<<": ";

        cout<<a;

        reverse(a.begin(),a.end());

        cout<<a.substr(1,a.size()-1)<<endl;
   }

   return 0;
}
