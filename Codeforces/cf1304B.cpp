#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   int n,i,j,k,l;
   cin>>n>>k;
   map<string,int>x;
   string a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       x[a[i]]++;
   }
   string m;
   string ans;
   for(i=0;i<n;i++)
   {
       string temp;
       temp=a[i];
       reverse(temp.begin(),temp.end());
       if(temp==a[i])
       {
           if(temp.size()>m.size())
           {
               m=temp;
           }
       }
       else if(x[temp]>0)
       {
           ans+=temp;
           x[temp]--;
           x[a[i]]--;
       }
   }
   string revv;
   revv=ans;
   reverse(revv.begin(),revv.end());
   ans+=m;
   ans+=revv;
   cout<<ans.size()<<endl;
   cout<<ans<<endl;
   return 0;
}
