#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
ll a[1000070]={0};
void selfnum()
{

    ll i,j,k,l;
    for(i=1;i<=1000002;i++)
    {
        j=i;
        k=0;
        while(j)
        {
            k+=j%10;
            j/=10;
        }
        l=i+k;
        a[l]=1;
    }

}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   selfnum();
   for(ll i=1;i<=1000000;i++)
   {
       if(a[i]==0) cout<<i<<endl;
   }


   return 0;
}
