#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{

   ll s,c,d,e,i,l=1;
   while(cin>>c>>s)
   {
       d=0;
       e=2*c;
       ll a[e+2]={0};
       for(i=0;i<s;i++)
       {
           cin>>a[i];
           d+=a[i];
       }

       sort(a,a+e,greater<int>());

       double am=(double)d/(double)c;
       double ans=0.0;
       cout<<"Set #"<<l<<endl;
       l++;

       for(i=0;i<c;i++)
       {
           cout<<" "<<i<<":";
           if(a[i]) cout<<" "<<a[i];
           if(a[e-i-1]) cout<<" "<<a[e-i-1];
           cout<<endl;
           ans+=abs(am-(a[i]+a[e-i-1]));
       }
       cout<<"IMBALANCE = ";
       printf("%.5lf\n",ans);
       cout<<endl;

   }
   return 0;
}
