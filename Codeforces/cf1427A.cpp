#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ///~!B}]

    test
    {
        ll a[10000],c,d,e=0,f,i,j,k,l;
        cin>>c;
        for(i=0; i<c; i++)
        {
            cin>>a[i];
        }
        sort(a,a+c,greater<int>());
        for(i=0; i<c; i++)
        {
            e+=a[i];
            if(e==0)
            {
                break;
            }
        }
        if(e==0)
        {
            sort(a,a+c);
            e=0;
            for(i=0; i<c; i++)
            {
                e+=a[i];
                if(e==0)
                {
                    break;
                }
            }
            if(e==0)
            {
                cout<<"NO"<<endl;
                continue;
            }
            else
            {
                cout<<"YES"<<endl;
                for(i=0; i<c; i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }

        }
        else
        {
            cout<<"YES"<<endl;
            for(i=0; i<c; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }


    }


    return 0;
}
