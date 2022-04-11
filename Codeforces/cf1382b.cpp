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
        ll a[200000],c,d=0,e,f,i,j,k,l;
        cin>>c;
        for(i=0; i<c; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<c; i++)
        {
            if(a[i]>1)
            {
                d=i+1;
                break;
            }
        }
        if(d%2==1 || c==1) cout<<"First"<<endl;
        else if(d%2==0 && d>0) cout<<"Second"<<endl;
        else if(c%2==0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}
