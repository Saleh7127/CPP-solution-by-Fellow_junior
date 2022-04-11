#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a,c;
   ll d,e=0,f,i,j,k,l;
   cin>>d>>a>>c;
   for(i=0;i<d;i++)
   {
       if(a[i]!=c[i] && a[i+1]!=c[i+1])
       {
           e++;
           swap(a[i],a[i+1]);
       }
       else if(a[i]!=c[i])
       {
           e++;
           if(a[i]=='0') a[i]='1';
           else a[i]='0';
       }
   }
   cout<<e<<endl;

   return 0;
}
