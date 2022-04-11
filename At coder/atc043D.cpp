#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll c,d,e,f,i,j,k,l;
    string a;
    cin>>a;
    if(a.size()==2)
    {
        if(a[0]==a[1])
        {
            cout<<"1 2"<<endl;
        }
        else cout<<"-1 -1"<<endl;
    }
    else
    {
        for(i=0; i<a.size()-2; i++)
        {
            if(a[i]==a[i+1])
            {
                cout<<i+1<<" "<<i+2<<endl;
                return 0;
            }
            if(a[i]==a[i+2])
            {
                cout<<i+1<<" "<<i+3<<endl;
                return 0;
            }
            if(a[i+1]==a[i+2])
            {
                cout<<i+2<<" "<<i+3<<endl;
                return 0;
            }
        }
        cout<<"-1 -1"<<endl;

    }

    return 0;
}
