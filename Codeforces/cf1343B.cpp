#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        d=0;
        c=0;
        cin>>a;
        b=a/2;
        if(b%2==1) cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(i=2;i<=a;i+=2)
            {
                printf("%d ",i);
                c+=i;
            }
            for(i=1;i<a-1;i+=2)
            {
                printf("%d ",i);
                d+=i;
            }
            printf("%d\n",c-d);
        }
    }
    return 0;
}
