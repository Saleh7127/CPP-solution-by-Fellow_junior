#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
ll phi[200008],sum[200005];
ll a,c,d,e,f,i,j,k,l;
void phiii()
{
    for(i=1;i<=200005;i++)
    {
        phi[i]=i;
    }
    for(i=2;i<=200005;i++)
    {
        if(phi[i]==i)
        {
            phi[i]=i-1;
            for(j=2*i;j<=200005;j+=i)
            {
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
}

void summm()
{
    phiii();
    for(i=1;i<200005;i++)
    {
        for(j=2;i*j<200005;j++)
        {
            sum[i*j]+=(i*phi[j]);
        }
    }
    for(i=2;i<200005;i++)
    {
        sum[i]+=sum[i-1];
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

  summm();
  while(cin>>a &&a)
  {
      cout<<sum[a]<<endl;
  }

   return 0;
}
