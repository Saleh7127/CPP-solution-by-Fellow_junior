#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior

   string a;
   ll c,d,i,j,k='a';
   cin>>a;
   if(a.size()<26)
   {
       cout<<-1<<endl;
       return 0;
   }
   for(i=0;i<a.size() && k<='z';i++)
   {
       if(a[i]<=k)
       {
           a[i]=k;
           k++;
       }
   }
   if(k>'z') cout<<a<<endl;
   else cout<<-1<<endl;
   return 0;
}
