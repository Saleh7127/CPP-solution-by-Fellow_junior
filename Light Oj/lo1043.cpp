#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    int t,i,j,k;
    double ab,ac,bc,ra,ad,r;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>ab>>ac>>bc>>ra;
        r=sqrt(ra)/sqrt(ra+1);
        ad=r*ab;
        printf("Case %d: %.10lf\n",i,ad);
    }
    return 0;
}
