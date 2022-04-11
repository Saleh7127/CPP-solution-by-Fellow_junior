#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 ll a[500][500];
int main()
{
    fellow_junior
    test
    {
        ll r,c,d=0,e,f,i,j,k,l;
        cin>>r>>c;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                l=4;
                if(i==0) l--;
                if(i==r-1) l--;
                if(j==0) l--;
                if(j==c-1) l--;
                if(a[i][j]>l) d=1;
                a[i][j]=l;
            }
        }
        if(d) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
