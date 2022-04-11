#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1)
#define yes printf("YES\n");
#define no printf("NO\n");
int main()
{
    Faster
    test
    {
        ll a[100][100],c[100]={0},d[100]={0},e=0,f,i,j,k,l,n,m;
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                {
                    c[i]=1;
                    d[j]=1;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(c[i]==0)
            {
                for(j=0;j<m;j++)
                {
                    if(d[j]==0)
                    {
                        e++;
                        c[i]=d[j]=1;
                        break;
                    }
                }
            }
        }
        if(e%2)
            printf("Ashish\n");
        else
            printf("Vivek\n");
    }
    return 0;
}
