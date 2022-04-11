#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll lis( ll arr[], ll n )
{
    ll lis[n],i,j;
    lis[0] = 1;
    for (i = 1; i < n; i++ )
    {
        lis[i] = 1;
        for (j = 0; j < i; j++ )
        {
            if ( arr[j] >= arr[i] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
            }
        }
    }
    return *max_element(lis,lis+n);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a[10000],n,i,j,k,l=0;
    while(cin>>a[0] && a[0]!=-1)
    {
       n=1;
       while(cin>>a[n] && a[n]!=-1)
       {
           n++;
       }
       if(l) cout<<endl;

       cout<<"Test #"<<++l<<":"<<endl;
       cout<<"  maximum possible interceptions: "<<lis(a,n)<<endl;
    }


    return 0;
}
