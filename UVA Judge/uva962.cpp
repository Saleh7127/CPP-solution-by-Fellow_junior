#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll n,m,d,i,j,k,l;

   while(cin>>n>>m)
   {

       ll a[100500];
       map<ll,bool>c;
       d=cbrt(n+m)+1;
       l=k=0;
       for(i=1;i<=d;i++)
       {
           for(j=i+1;j<=d;j++)
           {
               ll s=(i*i*i)+(j*j*j);
               if(s>=n && s<=(n+m))
               {
                   a[l]=s;
                   l++;
               }
           }
       }
       sort(a,a+l);
       for(i=0;i<l-1;i++)
       {
           if(a[i]==a[i+1] && c[a[i]]==0)
           {
               cout<<a[i]<<endl;
               k=1;
               c[a[i]]=true;
           }
       }
       if(k==0) cout<<"None"<<endl;
   }
   return 0;
}
