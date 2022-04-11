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
        ll a[200000],c,d=0,e,f=0,i,j,k=0,l=0;
        cin>>c;
        for(i=0; i<c; i++)
        {
            cin>>a[i];
        }

        for(i=c-2; i>=0; i--)
        {
            a[i]+=a[i+1];
        }
        sort(a,a+c);
        cout<<a[c-1]<<endl;
    }


    return 0;
}
