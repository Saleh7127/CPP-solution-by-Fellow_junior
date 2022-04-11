#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

    test
    {

        ll n,a,b,c,d,e,f=100000000,i,j,k=0,l=0;

        cin>>n;
    3
        for(i=1;i<=n;i++)
        {
            a=(i*(i+1))/2;
            if(a==n)
            {
                k=1;
                e=i;
                break;
            }
            if(a-n==1)
            {
                k=1;
                e=i+1;
                break;
            }
            if(a>n)
            {
                break;
            }
        }

        if(k) cout<<e<<endl;
        else cout<<i<<endl;
    }


   return 0;
}
