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
       cin>>a>>c;
       string x="";
       for(i=0;i<a;i++)
       {
           if(i<a-c) x+='0';
           else x+='1';
       }
        for(j=0; ;j++)
       {
           cout<<x<<endl;
           if(next_permutation(x.begin(),x.end())==0)
           {
               break;
           }
       }
       if(t) cout<<endl;
   }
   return 0;
}
