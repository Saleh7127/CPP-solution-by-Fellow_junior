#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0,d=0,e,f,i,j,k;
    cin>>a;
    int b[a+5];
    for(i=0;i<a;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<a;i++)
    {
        c=c+b[i];
        printf("%d ",c);
        if(c>d)
        {
            d=c;
        }
        else
        {
            c=d;
        }
    }
    return 0;
}
