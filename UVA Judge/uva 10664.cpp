#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    cin>>t;
    getchar();
    for(int cs=1; cs<=t; cs++)
    {

        string a;
        getline(cin,a);

        ll n,m,i,j,k=0,l=0;
        vector<ll>x;

        for(i=0; i<a.size(); i++)
        {
            if(a[i]==' ')
            {
                x.push_back(k);
                l+=k;
                k=0;
            }
            else
            {
                k=(k*10)+(a[i]-'0');
            }
        }

        l+=k;

        if(k) x.push_back(k);

        ll dp[2000]={0};

        dp[0]=1;

        for(i=0; i<x.size(); i++)
        {
            for(j=(l/2); j>=0; j--)
            {
                if(dp[j])
                {
                    dp[j+x[i]]=1;
                }
            }
        }
        if(dp[(l/2)]==1 && l%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
