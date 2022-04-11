#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,b;
    scanf("%d",&a);
    b=a-1;
    printf("%d\n",a);
    for(i=0; i<a; i++)
    {
        if(i==b)
            printf("1\n");
        else
            printf("1 ");
    }

    return 0;
}
