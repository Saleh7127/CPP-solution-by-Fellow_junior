#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll fiv[50]= {0};
    fiv[0]=1;
    fiv[1]=2;
    for(ll i=2; i<50; i++)
    {
        fiv[i]=fiv[i-1]+fiv[i-2];
    }

    test
    {
        ll a,c,d,e,f,i,j=0;
        cin>>a;
        cout<<a<<" = ";
        for(i=49;i>=0;i--)
        {
            if(a/fiv[i]==1)
            {
                j=1;
                a=a%fiv[i];
                cout<<1;
            }
            else if(j==1)
            {
                cout<<0;
            }
        }
        cout<<"(fib)"<<endl;
    }


    return 0;
}
