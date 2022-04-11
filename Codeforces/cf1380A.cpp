#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fellow_junior
    test
    {
        ll a[100000],c,d=0,e,f,i,j,k,l;
        cin>>c;
        for(i=1; i<=c; i++)
        {
            cin>>a[i];
        }
        for(i=2; i<=c-1; i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                cout<<"YES"<<endl;
                cout<<i-1<<" "<<i<<" "<<i+1<<endl;
                d=1;
                break;
            }
        }
        if(d==0) cout<<"NO"<<endl;
    }
    return 0;
}
