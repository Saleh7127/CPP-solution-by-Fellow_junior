#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
   string a,c,d="";
   cin>>a>>c;
   for(int i=0;i<a.size();i++)
   {
       if(a[i]<c[i])
       {
           cout<<-1<<endl;
           return 0;
       }
   }
   cout<<c<<endl;
   return 0;
}
