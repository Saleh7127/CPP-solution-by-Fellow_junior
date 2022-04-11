#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100005],b,c=1000000005,d,e=0,f,i,j,k,l;
    cin>>b;
    for(i=1;i<=b;i++)
    {
        cin>>a[i];
        if(a[i]<c)
        {
            c=a[i];
            d=i;
        }
    }
    for(i=1;i<=b;i++)
    {
        if(a[i]==c) e++;
    }
    if(e==1) printf("%d\n",d);
    else printf("Still Rozdil\n");

    return 0;
}
