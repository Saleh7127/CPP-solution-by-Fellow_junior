#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        int b,c=0,d=0,e,f,i,j,l;
        cin>>b;
        int a[b+5];
        for(i=0; i<b; i++)
        {
            cin>>a[i];
        }
        for(j=1; j<b; j++)
        {
            if(a[j]-a[j-1]!=1)
            {
                c++;
            }
        }
        for(j=1; j<b; j++)
        {
            if(a[j-1]-a[j]!=1)
            {
                d++;
            }
        }
        if(c<=1 || d<=1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
