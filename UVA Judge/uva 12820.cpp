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

    ll n,m,i,j,k,l,tt=0;

    while(cin>>n)
    {
        cout<<"Case "<<++tt<<": ";
        k=0;
        while(n--)
        {
            cin>>a;

            map<char,ll>x;
            map<ll,ll>y;

            l=0;
            j=0;

            for(i=0; i<a.size(); i++)
            {
                x[a[i]]++;
            }

            for(char w='a'; w<='z'; w++)
            {
                if(x[w])
                {
                    l++;
                    y[x[w]]++;
                }
            }

            for(i=1; i<=50; i++)
            {
                if(y[i]>1)
                {
                    j=1;
                    break;
                }
            }

            if(l>=2 && j==0) k++;

            x.clear(),y.clear();
        }
        cout<<k<<endl;
    }


    return 0;
}

