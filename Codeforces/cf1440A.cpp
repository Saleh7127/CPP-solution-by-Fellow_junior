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
        string a;
        ll n,b,c,h,i,j,k=0,l=0,d,e,f;
        cin>>n>>b>>c>>h;
        cin>>a;
        for(i=0;i<n;i++)
        {
            if(a[i]=='0') k++;
            else l++;
        }
        d=k*b+l*c;
        e=(k+l)*c+k*h;
        f=(l+k)*b+l*h;
        cout<<min(d,min(e,f))<<endl;

    }



    return 0;
}
