#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   ll n,m,i,j,k=0,l=0,x=0,y=0;

   cin>>n;

   string a;

   cin>>a;

   for(i=0;i<n;i++)
   {
        if(a[i]!='?')
        {
             if(i<n/2) x+=(a[i]-'0');
             else y+=(a[i]-'0');
        }
        else
        {
             if(i<n/2) k++;
             else l++;
        }
   }


   if(k<l)
   {
        if((y+9*(l-k)/2)==x) cout<<"Bicarp"<<endl;
        else cout<<"Monocarp"<<endl;
   }
   else
   {
        if((x+9*(k-l)/2)==y) cout<<"Bicarp"<<endl;
        else cout<<"Monocarp"<<endl;
   }

   return 0;
}
