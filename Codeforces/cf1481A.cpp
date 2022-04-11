#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll c,d,e=0,f=0,i,j,k,l;
       string a;
       cin>>c>>d>>a;
       char x,y;
       if(c<0) x='L';
       else x='R';

       if(d<0) y='D';
       else y='U';

       for(i=0;i<a.size();i++)
       {
           if(a[i]==x) e++;
           if(a[i]==y) f++;
       }
       if(abs(c)<=e && abs(d)<=f) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

   }


   return 0;
}
