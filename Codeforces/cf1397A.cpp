#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ///!b1@[]
    test
    {
        ll n,c,d,e,f,i,j=0,k=10000000;
        ll a[26]={0};
        string x;
        cin>>n;
        k=n;
        while(n--)
        {
            cin>>x;
            for(i=0; i<x.size(); i++)
            {
                a[x[i]-97]++;
            }
        }
        for(i=0; i<26; i++)
        {
            if(a[i]>0)
            {
                if(a[i]%k!=0)
                {
                    j=1;
                    break;
                }
            }
        }
        if(j==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
