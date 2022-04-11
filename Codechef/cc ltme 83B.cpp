#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,s,a[1000],b[1000],i,j,k,l,m;
    cin>>t;
    while(t--)
    {
        m=0;
        cin>>n>>s;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<n;i++)
        {
            if(m) break;
            for(j=0;j<n;j++)
            {
                if(b[i]==0 && b[j]==1)
                {
                    if(a[i]+a[j]+s<=100)
                    {
                        m=1;
                        break;
                    }
                }
                else if(b[i]==1 && b[j]==0)
                {
                    if(a[i]+a[j]+s<=100)
                    {
                        m=1;
                        break;
                    }
                }
            }
        }
        if(m) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
