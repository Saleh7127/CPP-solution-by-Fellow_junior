#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,c,d,i,j,k,l;
    double a,e,f,g=0.0,h=0.0,m,n;
    cin>>t>>a;
    cin>>e>>f;
    g=e/f;
    t--;
    while(t--)
    {
        cin>>e>>f;
        if(e/f<g)
        {
            g=e/f;
        }
    }
    h=a*g;
    printf("%.8lf\n",h);
    return 0;
}
