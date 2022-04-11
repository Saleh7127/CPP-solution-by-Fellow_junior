#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[10000],b,d,e,f,g,h,k,t,q,n,m;
    char c;
    cin>>t;
    for(q=1; q<=t; q++)
    {
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>c;
            if(c=='S')
            {
                cin>>d;
                for(int i=0; i<n; i++)
                {
                    a[i]+=d;
                }
            }
            else if(c=='M')
            {
                cin>>d;
                for(int i=0; i<n; i++)
                {
                    a[i]*=d;
                }
            }
            else if(c=='D')
            {
                cin>>d;
                for(int i=0; i<n; i++)
                {
                    a[i]/=d;
                }
            }
            else if(c=='R')
            {
                for(int i=0,j=n-1; i<j; i++,j--)
                {
                    swap(a[i],a[j]);
                }
            }
            else if(c=='P')
            {
                cin>>e>>f;
                swap(a[e],a[f]);
            }
        }
        cout<<"Case "<<q<<":"<<endl;
        for(int l=0;l<n-1;l++)
        {
            cout<<a[l]<<" ";
        }
        cout<<a[n-1]<<endl;
    }
    return 0;
}
