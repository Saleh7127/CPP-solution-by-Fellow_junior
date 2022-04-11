#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
string a[120][909][2];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,m,i,s,j,k,l;

    cin>>m>>s;

    if(m==1 && s==0)
    {
         cout<<"0 0"<<endl;
         return 0;
    }

    if(m && !s)
    {
         cout<<"-1 -1"<<endl;
         return 0;
    }
    for(i=0; i<110; i++)
    {
        for(j=0; j<901; j++)
        {
            for(k=0; k<2; k++)
            {
                a[i][j][k]="-1";
            }
        }
    }

    a[0][0][0]=a[0][0][1]="";

    for(i=0; i<m; i++)
    {
        for(j=0; j<901; j++)
        {
            for(k=0; k<2; k++)
            {
                if(a[i][j][k]=="-1") continue;

                for(l=0; l<10; l++)
                {
                    if(a[i][j][k]=="" && l==0) continue;

                    string b=a[i][j][k];

                    b.push_back('0'+l);

                    if(a[i+1][j+l][0]=="-1") a[i+1][j+l][0]=b;
                    else a[i+1][j+l][0]=min(b,a[i+1][j+l][0]);

                    if(a[i+1][j+l][1]=="-1") a[i+1][j+l][1]=b;
                    else a[i+1][j+l][1]=max(b,a[i+1][j+l][1]);
                }
            }
        }
    }

    cout<<a[m][s][0]<<" "<<a[m][s][1]<<endl;

    return 0;
}
