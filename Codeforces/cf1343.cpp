#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>a;
        c=1;
        for(i=1; ; i++)
        {
            c+=pow(2,i);;
            if(a%c==0)
            {
                printf("%lld\n",a/c);
                break;
            }
        }
    }
    return 0;
}
