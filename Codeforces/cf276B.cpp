#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   string a;
   ll c=0,d,e,i,j,k,l;
   cin>>a;
   ll x[200]={0};
   for(i=0;i<a.size();i++)
   {
       x[a[i]-'a']++;
   }
   for(i=0;i<26;i++)
   {
       if(x[i]%2==1)
       {
           c++;
       }
   }
   if(c==0 || c%2==1) cout<<"First"<<endl;
   else cout<<"Second"<<endl;
   return 0;
}
