#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 1000008
bool marked[maX];
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(ll i=4; i<=maX; i+=2)
    {
        marked[i]=1;
    }
    for(ll i=3; i<=maX; i+=2)
    {
        if(marked[i]==0)
        {
            for(ll j=i*i; j<=maX; j+=i+i)
            {
                marked[j]=1;
            }
        }
    }
}
int main()
{
     test
    {
        ll n,m,i,j;
        cin >> n >> m;
        string a[n];
        for (i = 0; i  <n ; i++)
        {
            cin >> a[i];
        }
        ll l=-1,r=-1,t=-1,b=-1;
        ll check = 0;
        for (i=0;i<n;i++)
        {

            for (j=0;j <m;j++)
            {
                if (a[i][j] == '1' and check == 0)
                {
                    check = 1;
                    l = j;
                    r = j;
                    t = i;
                    b = i;
                }
                else if (a[i][j] == '1' and j < l)
                {
                    l = j;
                }

                else if (a[i][j] == '1' and j > r)
                {
                    r = j;
                }

                if (a[i][j] == '1' and i > b)
                {
                    b = i;
                }
            }
        }
        int flag = 0;
        for (i=t; i<= b ; i++)
        {
            for (j=l;j <= r; j++ )
            {
                if (a[i][j]=='0')
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag==0)cout <<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}
