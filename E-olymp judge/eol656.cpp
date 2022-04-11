#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a,c,d,e,f,i,j=0,k=1,l;
    cin>>a;

    while(1)
    {
        if(k>=a) break;
        else
        {
            k*=9;
            j++;
        }
    }
    if(j%2) cout<<"Stan wins."<<endl;
    else cout<<"Ollie wins."<<endl;

    return 0;
}
