#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,i,j,k,l;
    pair<int,int>a[200000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    for(i=100;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            if(i==a[j].second)
            {
                printf("%d %d\n",a[j].first,a[j].second);
            }
        }
    }
    return 0;
}
