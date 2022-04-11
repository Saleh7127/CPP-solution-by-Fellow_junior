#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define sc(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
int main()
{
    int a[100000],c,d,e,f,i,j,k=1,l,q;
    while(1)
    {
        scanf("%d %d",&c,&q);
        if(c==0 && q==0) break;
        for(i=0;i<c;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("CASE# %d:\n",k++);
        sort(a,a+c);
        while(q--)
        {
            cin>>d;
            e=0;
            for(j=0;j<c;j++)
            {
                if(a[j]==d)
                {
                    e=j+1;
                    break;
                }
            }
            if(e==0) printf("%d not found\n",d);
            else printf("%d found at %d\n",d,e);
        }
    }
   return 0;
}

