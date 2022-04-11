#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i;
    double ar[100];
    for(i = 0; i < 5 ; i++)
    {
        scanf("%lf",&ar[i]);

    }
    sort(ar,ar+5);

    printf("%.1lf\n",ar[1]+ar[2]+ar[3]);

    return 0;
}
