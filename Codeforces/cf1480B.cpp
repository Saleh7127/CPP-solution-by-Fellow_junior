#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

bool compare(vector<ll>a,vector<ll>c)
{
    return a[0]<c[0];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

        ll A,B,n,c,d,e,i,j,k=0,l=0;
        cin>>A>>B>>n;
        ll b[n+5];
        vector<vector<ll>>a;
        for(i=0; i<n; i++)
        {

            cin>>e;
            a.push_back({e,i});
        }
        sort(a.begin(),a.end(),compare);
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }

        for(i=0; i<n; i++)
        {

            c=a[i][1];
            d=b[c]/A;
            if(b[c]%A!=0)
            {
                d++;
            }

            k+=(d-1)*a[i][0];
            if(k>=B)
            {
                l=1;
                break;
            }
            k+=a[i][0];

        }
        if(l==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }


    return 0;
}
