///CF 606C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int a[100050];
int main()
{
    int n;
    int i,j,k,l,max;
    while(~scanf("%d",&n))
    {
        for(i = 1; i <= n; i++)
        {
            scanf("%d",&k);
            a[k] = i;
        }
        max = 1;
        for(i = 1; i <= n-1; i+=l)
        {
            l=1;
            for(j = i+1; j <= n; j++)
            {
                if(a[j]>a[j-1])
                {
                    l++;
                }
                else break ;
            }
            if(l>max)
            {
                max = l;
            }
        }
        printf("%d\n",n-max);
    }
    return 0;
}
