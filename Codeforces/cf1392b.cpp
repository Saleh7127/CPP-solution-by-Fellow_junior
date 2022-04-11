#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        long long a[200005],c,d,e=-2000000000,f,i,j,k,l;
        cin>>c>>k;
        for(i=0; i<c; i++)
        {
            cin>>a[i];
            e=max(e,a[i]);
        }
        if(k%2==1)
        {
            for(i=0; i<c; i++)
            {
                cout<<e-a[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            f=-2000000000;
            for(i=0; i<c; i++)
            {
                a[i]=e-a[i];
                f=max(f,a[i]);
            }
            for(i=0; i<c; i++)
            {
                cout<<f-a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
