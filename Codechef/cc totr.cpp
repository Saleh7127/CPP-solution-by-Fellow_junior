#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   string a;
   ll c,d,e,f,j,i,k,l;
   cin>>c>>a;
   string x;
   while(c--)
   {
       cin>>x;
       for(i=0;i<x.size();i++)
       {
           if(x[i]=='_') cout<<" ";
           else if(x[i]>='a' && x[i]<='z')
           {
               k=x[i]-'a';
               cout<<a[k];
           }
           else if(x[i]>='A' && x[i]<='Z')
           {
               k=x[i]-'A';
               char ch=a[k]-32;
               cout<<ch;
           }
           else cout<<x[i];
       }
       cout<<endl;
   }

   return 0;
}
