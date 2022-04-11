#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll a[105][105]={0},c,d,e,i,j,k,l;
        cin>>c;
        if(c%2==0)
        {
            for(i=1; i<=c; i++)
            {
                a[i][i]=1;
                a[i][c-i+1]=1;
            }

            for(i=1; i<=c; i++)
            {
                for(j=1; j<=c; j++)
                {
                   cout<<a[i][j]<< " ";
                }
                cout<<endl;
            }
        }
        else if(c%2)
        {
            for(i=1; i<=c; i++)
            {
                a[i][i]=1;
                a[i][c-i+1]=1;
            }
            a[c][(c+1)/2]=1;
            a[(c+1)/2][1]=1;
            for(i=1; i<=c; i++)
            {
                for(j=1; j<=c; j++)
                {
                   cout<<a[i][j]<< " ";

                }
                cout<<endl;
            }
        }
    }


    return 0;
}
