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
       string a;
       ll c,d,e=-100,f,i,j,k=0,l;
       cin>>c>>a;
       if(c==1)
       {
           cout<<0<<endl;
           continue;
       }
       for(i=0;i<c;i++)
       {
           if(a[i]=='A') e=0;
           else e++;
           if(e>k) k=e;
       }
       cout<<k<<endl;
   }
   return 0;
}
