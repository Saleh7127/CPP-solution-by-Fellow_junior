#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    bool solution[10000]={false};
    ll n,a[100000],c=0,d,e,f,i,j,k,l;
    cin>>n>>d;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(abs(i - d) == abs(j - d) && a[i] != a[j])
            {
                solution[i]=solution[j]=true;
            }
        }
    }
    for(k=1;k<=n;k++)
    {
        if(a[k]==1 && solution[k]==false)
        {
            c++;
        }
    }
    printf("%lld\n",c);
    return 0;
}
