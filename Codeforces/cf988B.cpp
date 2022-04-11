#include <bits/stdc++.h>
using namespace std;
bool cmpr(string a,string c)
{
    return a.size()<c.size();
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   vector<string>a;
   int n,i,j,k,l;
   cin>>n;
   string s;
   for(i=0;i<n;i++)
   {
       cin>>s;
       a.push_back(s);
   }
   sort(a.begin(),a.end(),cmpr);
   for(i=0;i<n-1;i++)
   {
       if(a[i+1].find(a[i])==-1)
       {
           cout<<"NO"<<endl;
           return 0;
       }
   }
   cout<<"YES"<<endl;
   for(i=0;i<n;i++)
   {
       cout<<a[i]<<endl;
   }

   return 0;
}
