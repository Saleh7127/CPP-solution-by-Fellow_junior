#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a;
    ll f[26]= {0},i,j=0,k=-1,l;
    cin>>a;
    for(i=0; i<a.size(); i++)
    {
        f[a[i]-'A']++;
    }
    for(i=0; i<26; i++)
    {
        if(f[i]%2)
        {
            j++;
            k=i;
        }
    }
    if(j>1) cout<<"NO SOLUTION"<<endl;
    else
    {
        string x="";
        for(i=0; i<26; i++)
        {
            if(k>-1 && k==i)
            {
                continue;
            }
            else
            {
                l=f[i]/2;
                for(j=0; j<l; j++)
                {
                    x+=('A'+i);
                }
            }
        }
        cout<<x;
        if(k>-1)
        {
            l=f[k];
            char z=k+'A';
            for(j=0; j<l; j++)
            {
                cout<<z;
            }
        }
        reverse(x.begin(),x.end());
        cout<<x;
        cout<<endl;
    }
    return 0;
}
