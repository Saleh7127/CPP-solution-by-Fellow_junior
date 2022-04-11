#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,b,c,d,e=0,f,i,j,k,l;
    string a;

    cin>>n;
    cin>>a;

        for(i=e; i<a.size()-2; i++)
        {
            if(a[i]=='f' && a[i+1]=='o' && a[i+2]=='x')
            {
                j=i;
                k=i+2;
                a.erase(j,k);

                e=0;
                i=e;
            }

        }

    cout<<a.size()<<endl;

    return 0;
}
