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
        ll n,i,l=0,j;

        string a;

        cin>>n>>a;

        for(i=0;i<n;i++)
        {
             j=a[i]-'0';
             if(i<n-1 && j) l++;
             l+=j;
        }

        cout<<l<<endl;
   }


   return 0;
}
