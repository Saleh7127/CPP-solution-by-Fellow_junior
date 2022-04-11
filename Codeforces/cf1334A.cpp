#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,n,d,e,f,i,j,k,l,p,c;
    cin>>t;
    while(t--)
    {
        d=0;
        cin>>n;
        a=0;
        b=0;
        for(i=0; i<n; i++)
        {
            cin>>p>>c;
            if(p<a || c<b || c>p || (c-b>p-a))
            {
                d=1;
            }
            a=p;
            b=c;
        }
        if(d==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
