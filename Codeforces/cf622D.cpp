#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[1000005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,i,j=1,k,l;

    cin>>n;


    if(n%2)
    {
        j=1;
        for(i=1; i<=n/2; i++)
        {
            a[i]=j;
            a[n-i+1]=j;
            j+=2;
        }
        a[(n+1)/2]=j;
        j=2;
        for(l=1; l<=n/2; l++)
        {
            a[n+l]=j;
            a[2*n-l]=j;
            j+=2;
        }
        a[2*n]=n;
    }
    else
    {
        j=1;
        for(i=1; i<=n/2; i++)
        {
            a[i]=j;
            a[n-i+1]=j;
            j+=2;
        }

        j=2;
        for(l=1; l<=n/2; l++)
        {
            a[n+l]=j;
            a[2*n-l]=j;
            j+=2;
        }
        a[2*n]=n;
    }



    for(i=1; i<=2*n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
