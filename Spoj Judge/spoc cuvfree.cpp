#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cd[1000008];
ll a[1000008]={0};
void cuve()
{
    ll i,j,k,l,m;
    for(i=2;i<101;i++)
    {
        j=i*i*i;
        for(k=j;k<1000008;k+=j)
        {
            cd[k]=true;
        }
    }
    m=0;
    for(i=1;i<1000008;i++)
    {
        if(cd[i]==false)
        {
            m++;
            a[i]=m;
        }
    }
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   cuve();
   ll t,c,i,j;
   cin>>t;
   for(i=1;i<=t;i++)
   {
       cin>>c;
       cout<<"Case "<<i<<": ";
       if(a[c]==0) cout<<"Not Cube Free"<<endl;
       else cout<<a[c]<<endl;
   }

   return 0;
}
