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
        long long a[200005],c,d,e,f,i,j,k=0,l;
        cin>>c;
        for(i=0; i<c; i++)
        {
            cin>>a[i];
        }
        for(i=1;i<c;i++)
        {
            if(a[i]<a[i-1])
            {
                k+=(a[i-1]-a[i]);
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
