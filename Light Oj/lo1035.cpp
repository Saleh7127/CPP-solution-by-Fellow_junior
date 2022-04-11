#include <bits/stdc++.h>
using namespace std;
vector<int>p;
bool mark[105];
void sieve()
{
    int i,j;
    for(i=3; i<=102; i+=2)
    {
        if(mark[i]==0)
        {
            for(j=i*i; j<=102; j+=i)
            {
                mark[j]=1;
            }
        }
    }
    p.push_back(2);
    for(i=3; i<=102; i+=2)
    {
        if(mark[i]==0)
        {
            p.push_back(i);
        }
    }
}

int main()
{
    sieve();
    int t,c,n;
    cin>>t;
    for(c=1; c<=t; c++)
    {
        cin>>n;
        cout<<"Case "<<c<<": "<<n<<" = ";
        int a[102]={0},i,j,k,l,q;
        for(i=2; i<=n; i++)
        {
            k=i;
            for(j=0; p[j]<=k; j++)
            {
                while(k%p[j]==0)
                {
                    a[p[j]]++;
                    k=k/p[j];
                }
            }
        }
        for(l=2,q=0; l<=100; l++)
        {
            if(a[l]>0)
            {
                if(q==0)
                {
                    cout<<l<< " ("<<a[l]<<")";
                    q++;
                }
                else
                {
                    cout<<" * "<<l<< " ("<<a[l]<<")";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
