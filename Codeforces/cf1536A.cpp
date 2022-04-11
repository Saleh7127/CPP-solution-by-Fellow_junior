#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {
        int n,m,a,i,j,k=0,l=0;

        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>a;
            if(a==0) l=1;
            if(a<0) k=1;
        }
        if(k) cout<<"NO"<<endl;
        else
        {
            if(l) j=101;
            else j=100;
            cout<<"YES"<<endl;
            cout<<j<<endl;
            if(l) cout<<0<<" ";

            for(i=1; i<=100; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
