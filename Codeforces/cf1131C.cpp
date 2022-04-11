#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
   fellow_junior
   ll a[20000],c,d,e,f,i,j,k,l;
   cin>>c;
   for(i=0;i<c;i++)
   {
       cin>>a[i];
   }
   sort(a,a+c);
   ll x[c];
   i=0,j=c-1;
   l=1;
   for(k=0;k<c;k++)
   {
       if(i>j) break;
       if(l%2==1)
       {
           x[i]=a[k];
           i++;
           l++;
       }
       else if(l%2==0)
       {
           x[j]=a[k];
           j--;
           l++;
       }
   }
   for(k=0;k<c;k++)
   {
       cout<<x[k]<<" ";
   }
   cout<<endl;
   return 0;
}
