#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
char a[1005][1005];
int col[1005][1005];
int x[4],y[4];
int n,m;
int co=0;

void dfs(int i,int j)
{
    col[i][j]=1;
    co++;

    for(int k=0; k<4; k++)
    {
        int xx=i+x[k];
        int yy=j+y[k];

        if(xx>=0 && xx<n && yy>=0 && yy<m && a[xx][yy]=='.' && col[xx][yy]==0)
            dfs(xx,yy);
    }

}

int main()
{

    int xxx[]= {1,-1,0,0};
    int yyy[]= {0,0,1,-1};

    for(int i=0; i<4; i++)
    {
        x[i]=xxx[i];
        y[i]=yyy[i];
    }
    test
    {

        cin>>n>>m;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
                col[i][j]=0;
            }

        vector<int>v;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            {
                if(a[i][j]=='.' && col[i][j]==0)
                {
                    co=0;
                    dfs(i,j);
                    v.push_back(co);
                }

            }

        cout<<v.size()<<"\n";
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }

        cout<<"\n";
    }

    return 0;
}
