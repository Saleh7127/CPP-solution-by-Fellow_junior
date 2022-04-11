#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=97,d=0,e,f,i,j,k;
    cin>>a>>b;
    for(i=1; i<=b; i++)
    {
        printf("%c",c);
        c++;
    }
    c=97;
    for(i=b+1; i<=a; i++)
    {
        if(d==b)
        {
            d=0;
            c=97;
        }
        d++;
        printf("%c",c);
        c++;
    }
    return 0;
}
