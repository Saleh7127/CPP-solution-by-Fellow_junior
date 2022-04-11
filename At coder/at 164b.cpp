#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e=0,f=0,i,j,k,l;
    cin>>a>>b>>c>>d;
    for(i=0 ; ; i++)
    {
        c=c-b;
        a=a-d;
        if(c<=0 || a<=0) break;
    }
    if(c<=0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

