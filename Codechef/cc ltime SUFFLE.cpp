#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int T=0;
    scanf("%d",&T);
    for(int t=0; t<T; t++)
    {
        int n=0,k=0;
        scanf("%d %d",&n,&k);
        ll arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+k; j<n; j=j+k)
            {
                if(arr[i]>arr[j])
                {
                    ll temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        bool bu=true;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                bu=false;
                break;
            }
        }
        if(bu)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
