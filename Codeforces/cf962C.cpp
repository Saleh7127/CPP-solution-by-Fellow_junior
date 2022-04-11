#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<string>x;

    string y,a;

    ll i,j,k,l,n,m=1e9,c,d;

    cin>>n;

    for(i=1;; i++)
    {
        k=i*i;

        if(k>n) break;

        a=to_string(k);

        x.push_back(a);

    }

    y=to_string(n);

    for(i=x.size()-1; i>=0; i--)
    {
        k=0;
        l=0;
        j=0;

        while(k<y.size() && j<x[i].size())
        {
            if(x[i][j]==y[k])
            {
                l++;
                j++,k++;
            }
            else if(x[i][j]!=y[k])
            {
                while(k<y.size() && x[i][j]!=y[k])
                {
                    k++;
                }
            }
        }

        if(l==x[i].size())
        {
            j=y.size();
            k=x[i].size();
            m=min(m,j-k);
            break;
        }
    }

    if(m==1e9) m=-1;

    cout<<m<<endl;


    return 0;
}
