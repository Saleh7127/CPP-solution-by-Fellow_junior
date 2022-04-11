#include <bits/stdc++.h>
using namespace std;
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
unsigned long long int phi[5000008];
int mark[5000008];
void sievephi()
{
    for(int i=2;i<=5000002;i++)
    {
        phi[i]=i;
    }
    for(int i=2;i<=5000002;i++)
    {
        if(mark[i]==false)
        {
            for(int j=i;j<=5000002;j+=i)
            {
                mark[j]=true;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
    for(long long int i=3;i<=5000002;i++)
    {
        phi[i]*=phi[i];
        phi[i]+=phi[i-1];
    }

}

int main()
{
   Faster
   sievephi();
   unsigned long long int t,a,c,i,j,ans;
   cin>>t;
   for(i=1;i<=t;i++)
   {
       cin>>a>>c;
       ans=phi[c]-phi[a-1];
       printf("Case %llu: %llu\n",i,ans);
   }
   return 0;
}
