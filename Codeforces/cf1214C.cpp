#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll b,c,d,e=0,f=0,i,j,k,l;
   string a;
   cin>>b;
   cin>>a;
   if(b%2) cout<<"No"<<endl;
   else
   {
       c=0;
       d=0;
       for(i=0;i<b;i++)
       {
           if(a[i]=='(')
           {
               c++;
               e++;
           }
           else if(a[i]==')' && c>0)
           {
               c--;
           }
           if(a[i]==')') f++;
       }
       if(c<=1 && e==f) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
   }


   return 0;
}
