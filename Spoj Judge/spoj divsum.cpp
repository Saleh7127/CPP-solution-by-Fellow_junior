#include <bits/stdc++.h>
using namespace std;
int sd(int n)
{
    int l=sqrt(n);
    int ans=0,i;
    for(i=1;i<l;i++)
    {
        if(n%i==0)
        {
            ans+=i;
            ans+=(n/i);
        }
    }
    if(n%l==0)
    {
        if(l*l==n) ans+=l;
        else
        {
            ans+=l;
            ans+=(n/l);
        }
    }
    return ans;
}
int main()
{
   int a,c,d,e,f,i,j,k,l;
   cin>>f;
   while(f--)
   {
       cin>>a;
       d=sd(a)-a;
       cout<<d<<endl;
   }

   return 0;
}
