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

        ll n,b,c,i,j,k,l;
        string a;
        cin>>n>>a;
        if(a=="2020")
        {
            cout<<"YES"<<endl;
            continue;
        }


        if(a[0]=='2' && a[1]=='0' && a[2]=='2' && a[3]=='0')
        {
            cout<<"YES"<<endl;
        }
        else if(a[0]=='2' && a[1]=='0' && a[n-2]=='2' && a[n-1]=='0')
        {
            cout<<"YES"<<endl;
        }
        else if(a[0]=='2' && a[n-1]=='0' && a[n-2]=='2' && a[n-3]=='0')
        {
            cout<<"YES"<<endl;
        }
        else if(a[n-1]=='0' && a[n-2]=='2' && a[n-3]=='0' && a[n-4]=='2')
        {
            cout<<"YES"<<endl;
        }

        else if(a[0]=='2' && a[1]=='0' && a[2]=='2' && a[n-1]=='0')
        {
            cout<<"YES"<<endl;
        }

        else cout<<"NO"<<endl;


    }

    return 0;
}
