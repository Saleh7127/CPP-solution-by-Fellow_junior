#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 ll a[500000];
int main()
{
    fellow_junior
    test
    {
        ll c,d=0,e,f,i,j,k,l;
        cin>>c;
        for(i=0; i<c; i++)
        {
            cin>>a[i];
        }
        if(a[0]<a[c-1]) d=1;
        if(d==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

