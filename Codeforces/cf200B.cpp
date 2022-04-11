#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i;
    double s=0.0;
    scanf("%d",&a);
    int b;
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        s+=b;
    }
    s=s/a;
    printf("%.12lf\n",s);
    return 0;
}

