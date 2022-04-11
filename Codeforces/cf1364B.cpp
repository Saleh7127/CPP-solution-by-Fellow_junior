#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   Faster
   test
   {
       int n,a[200000],i,j,k,l;
       cin>>n;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       vector<int>x;
       x.push_back(a[0]);
       for(i=1;i<n-1;i++)
       {
           if(a[i]<a[i-1] && a[i]<a[i+1])
           {
               x.push_back(a[i]);
           }
           else if(a[i]>a[i-1] && a[i]>a[i+1])
           {
               x.push_back(a[i]);
           }
       }
       x.push_back(a[n-1]);
       cout<<x.size()<<endl;
       for(i=0;i<x.size();i++)
       {
           cout<<x[i]<<" ";
       }

       x.clear();
   }

   return 0;
}
