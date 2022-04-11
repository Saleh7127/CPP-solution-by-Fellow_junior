#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int a,b,c,d,e,f,g,i,j,k,l;
    cin>>b;
    for(i=1; i<=b; i++)
    {
        cin>>a;
        c=(-1+sqrt(8*a-7))/2;
        d=(c*(c+1))/2+1;
        if(i==b)
        {
            if(d==a)
                printf("1\n");
            else
                printf("0\n");
        }
        else
        {
            if(d==a)
                printf("1 ");
            else
                printf("0 ");
        }
    }
    return 0;
}
