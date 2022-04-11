#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {
        char a[10][10];

        ll i,j,k=-1,l=-1,m=-1,n;


        for(i=0;i<5;i++)
        {
             for(j=0;j<5;j++)
             {
                  cin>>a[i][j];
                  if(a[i][j]=='|')
                  {
                       l=j;
                  }
                  if(a[i][j]=='>')
                  {
                       k=j;
                  }
                  if(a[i][j]=='<')
                  {
                       m=j;
                  }

             }
        }

        cout<<"Case "<<cs<<": ";

        if(k>=0 && k>l) cout<<"No Ball"<<endl;
        else if(m>=0 && m<l) cout<<"No Ball"<<endl;
        else cout<<"Thik Ball"<<endl;


    }

    return 0;
}
