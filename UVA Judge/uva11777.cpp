#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,s;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=0;
        scanf("%d %d %d %d %d %d %d",&b,&c,&d,&e,&f,&g,&h);
        if(f>=g && h>=g) j=(f+h)/2;
        if(f>=h && g>=h) j=(f+g)/2;
        if(g>=f && h>=f) j=(g+h)/2;

        s=b+c+d+e+j;
        if(s>=90) printf("Case %d: A\n",i);
        if(s>=80 && s<90) printf("Case %d: B\n",i);
        if(s>=70 && s<80) printf("Case %d: C\n",i);
        if(s>=60 && s<70) printf("Case %d: D\n",i);
        if(s<60) printf("Case %d: F\n",i);
    }

    return 0;
}
