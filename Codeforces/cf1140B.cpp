#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   test
   {
       int c,d=0,e=0,f,i,j,k,l;
       string a;
       cin>>c;
       cin>>a;

       e=c-1;
       for(i=0;i<c;i++)
       {
           if(a[i]=='>' || a[c-i-1]=='<')
           {
               e=min(e,i);
           }
       }
       cout<<e<<endl;
   }

   return 0;
}
