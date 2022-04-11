#include<bits/stdc++.h>
using namespace std;
double a[1000],b[1000];
double bal(int i, int j)
{
    return sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
}
int main()
{
    int n,c,d,i;
    double r,ans=0.0;
    scanf("%d %lf",&n,&r);
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf",&a[i],&b[i]);
    }
    ans=2*acos(-1.0)*r+bal(n-1,0);
    for(i=1;i<n;i++)
    {
        ans+=bal(i-1,i);
    }
    printf("%.2lf\n",ans);
    return 0;
}
