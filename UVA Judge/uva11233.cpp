#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,i,j,k,l;

   string a,b;

   map<string,string>x;

   cin>>n>>m;

   while(n--)
   {
        cin>>a>>b;
        x[a]=b;
   }
   while(m--)
   {
        cin>>a;

        if(x[a]!="") cout<<x[a]<<endl;
        else
        {
             l=a.size()-1;

             if(a[l]=='y' && (a[l-1]!='a' && a[l-1]!='e' && a[l-1]!='i' && a[l-1]!='o' && a[l-1]!='u'))
             {
                  a[l]='i';
                  a+="es";
             }
             else if(a[l]=='o' || a[l]=='s' || a[l]=='x' || (a[l]=='h' && a[l-1]=='c') || (a[l]=='h' && a[l-1]=='s'))
             {
                  a+="es";
             }
             else a+="s";


             cout<<a<<endl;
        }
   }


   return 0;
}
