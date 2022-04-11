#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   long long fact[22];
   fact[0]=1;
   for(int i=1;i<=20;i++)
   {
       fact[i]=fact[i-1]*i;
   }
   int t;
   cin>>t;
   while(t--)
   {
       string a;
       vector<char>app,ans;
       long long c,d,e,f,i,j,k,l,num;
       cin>>a>>num;
       num++;
       for(i=0;i<a.size();i++)
       {
           app.push_back(a[i]);
       }
       sort(app.begin(),app.end());
       while(!app.empty())
       {
           c=fact[app.size()-1];
           d=(num-1)/c;
           ans.push_back(app[d]);
           app.erase(app.begin()+d);
           num-=(c*d);
       }
       for(i=0;i<ans.size();i++)
       {
           cout<<ans[i];
       }
       cout<<endl;
   }

   return 0;
}
