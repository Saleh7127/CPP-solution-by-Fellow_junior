#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main()
{
    int t,i,j,l;
    double a,b,n,c,d,e,f,r,R,x;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>R>>n;
        a=pi/(n);
        b=1.00+sin(a);
        c=R*sin(a);
        r=c/b;
        printf("Case %d: %.10lf\n",i,r);
    }
    return 0;
}
