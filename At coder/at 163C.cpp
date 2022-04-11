#include<bits/stdc++.h>
using namespace std;
int a[1000000]={0};
int main()
{
    int b,c,d,e,f,i,j,k,l;
    cin>>b;
    for(i=0;i<b-1;i++)
    {
        cin>>c;
        a[c]++;
    }
    for(j=1;j<=b;j++)
    {
        printf("%d\n",a[j]);
    }
    return 0;
}
