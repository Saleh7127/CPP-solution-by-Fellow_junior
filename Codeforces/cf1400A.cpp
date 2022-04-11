#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>c;
        cin>>a;
        d=0;
        e=0;
        for(i=0; i<a.size(); i++)
        {
            if(a[i]=='0') d++;
            else e++;
        }
        if(d>e)
        {
            for(i=0;i<c;i++)
            {
                cout<<0;
            }
        }
        else
        {
            for(i=0;i<c;i++)
            {
                cout<<1;
            }
        }
        cout<<endl;
    }


    return 0;
}
