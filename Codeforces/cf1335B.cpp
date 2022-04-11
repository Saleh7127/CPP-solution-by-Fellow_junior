#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,a,b,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        d=0;
        c=0;
        cin>>n>>a>>b;
        for(i=97,j=0;j<n;j++,i++)
        {
            c++;
            printf("%c",i);
            if(c==b)
            {
                i=96;
                c=0;
            }
        }
        printf("\n");
    }
    return 0;
}
