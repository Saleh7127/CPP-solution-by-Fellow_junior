#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{

    char a[1000];
    ll b,c,d,e,f,i,j,t,k,l;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %s",&b,&a);
        if(strcmp(a,"Alice")==0)
        {
            if(b%3==1)
            {
                printf("Case %d: Bob\n",i);
            }
            else if(b%3==0 || b%3==2)
            {
                printf("Case %d: Alice\n",i);
            }
        }
        else
        {
            if(b%3==1 || b%3==2)
            {
                printf("Case %d: Bob\n",i);
            }
            else if(b%3==0)
            {
                printf("Case %d: Alice\n",i);
            }
        }
    }
    return 0;
}
