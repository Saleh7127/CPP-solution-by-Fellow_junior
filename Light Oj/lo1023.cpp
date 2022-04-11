#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   string x="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   ll c,d,e,i,j,k,l;
   cin>>c;
   for(i=1;i<=c;i++)
   {
       cin>>d>>e;
       cout<<"Case "<<i<<":"<<endl;
       string a="";
       for(j=0;j<d;j++)
       {
           a+=x[j];
       }
       for(j=0;j<e;j++)
       {
           cout<<a<<endl;
           if(next_permutation(a.begin(),a.end())==0)
           {
               break;
           }
       }
   }
   return 0;
}
