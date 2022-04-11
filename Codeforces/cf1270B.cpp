#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,b,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>b;
        c=1;
        long long a[200005];
        for(i=0;i<b;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<b;i++)
        {
            if(abs(a[i]-a[i-1])>=2)
            {
                printf("YES\n%lld %lld\n",i,i+1);
                c=0;
                break;
            }
        }
        if(c) printf("NO\n");
    }
    return 0;
}
