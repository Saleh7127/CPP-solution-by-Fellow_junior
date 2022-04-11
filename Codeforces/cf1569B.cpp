#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        ll n,m,i,j,k,l;

        string a;

        char x[56][60];

        cin>>n;

        cin>>a;

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                x[i][j]='=';
                if(i==j) x[i][j]='X';
            }
        }


        vector<ll>b;
        l=0;

        for(i=0; i<n; i++)
        {
            if(a[i]=='2')
            {
                l++;
                b.push_back(i);
            }
        }

        if(l==2 || l==1) cout<<"NO"<<endl;
        else
        {

            if(b.size())
            {
                for(i=0; i<b.size(); i++)
                {
                    if(i==b.size()-1)
                    {
                        x[b[i]][b[0]]='+';
                        x[b[0]][b[i]]='-';

                    }
                    else
                    {
                        x[b[i]][b[i+1]]='+';
                        x[b[i+1]][b[i]]='-';
                    }

                }

            }

            cout<<"YES"<<endl;

            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    cout<<x[i][j];
                }
                cout<<endl;
            }

        }

    }

    return 0;
}

