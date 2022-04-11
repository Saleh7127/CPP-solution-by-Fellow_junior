#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
string a[100005];
bool cmp(string a,string b)
{
    if(a.size()<b.size()) return 1;
    else if(a.size()==b.size())
    {
        if(a<b) return 1;
        else return 0;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {

        ll n,m,i,j,k,l=0;

        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n,cmp);

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                m=0;

                for(k=0; k<min(a[i].size(),a[j].size()); k++)
                {
                    if(a[i][k]!=a[j][k])
                    {
                        m=1;
                        break;
                    }
                }


                if(m==0)
                {
                    l=1;
                    break;
                }
            }
            if(l) break;
        }

        if(l) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }


    return 0;
}
