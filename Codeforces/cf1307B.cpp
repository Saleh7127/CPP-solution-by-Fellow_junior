#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test

    {

        int n,x,i,j=0,k,l=0;
        cin>>n>>x;
        while(n--)
        {
            cin>>i;
            l=max(l,i);
            if(i==x)
            {
                j=1;
            }
        }

        if(j) cout<<1<<endl;
        else
        {
            if(x%l==0) k=x/l;
            else k=1+x/l;
            cout<<max(2,k)<<endl;
        }
    }


    return 0;
}
