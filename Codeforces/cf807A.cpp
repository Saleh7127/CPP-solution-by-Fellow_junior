#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t,a[10000],b[10000],c=0,d=0,e,f,i,j,k,l;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]!=b[i])
            c=1;
    }
    if(c!=0)
    {
        printf("rated\n");
        return 0;
    }
    for(j=0; j<t-1; j++)
    {
        if(a[j]<a[j+1])
        {
            d=1;
        }
    }
    if(d==1)
        printf("unrated\n");
    else
        printf("maybe\n");

    return 0;
}
