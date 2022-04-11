#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int t;
   cin>>t;
   while(t--)
   {
       long long a[200005],c,d,e=0,f=0,i,j,k,l;
       cin>>c;
       for(i=0;i<c;i++)
       {
           cin>>a[i];
       }
       d=1;
       sort(a,a+c);
       for(i=0;i<c-1;i++)
       {
           if(a[i]==a[i+1])d++;
       }
       if(d==c) cout<<c<<endl;
       else cout<<1<<endl;
   }


   return 0;
}
