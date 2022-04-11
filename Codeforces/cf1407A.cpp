#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll a[200000],c,d=0,e=0,f=0,i,j=0,k,l;

        cin>>c;

        for(i=1; i<=c; i++)
        {
            cin>>a[i];
            if(a[i]==1) e++;
            else f++;
        }

        if(e>f)
        {
            if(e%2) e--;
            cout<<e<<endl;
            for(i=0;i<e;i++)
            {
                cout<<1<<" ";
            }
        }
        else
        {
            for(i=1;i<=c/2;i++)
            {
                cout<<0<< " ";
            }
        }
        cout<<endl;
    }
    return 0;
}
