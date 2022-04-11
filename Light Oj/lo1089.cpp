#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t,a,c,d,e,f,i,j,k,l;
    vector< int > x, y;
    scanf("%d",&t);
    for(l=1; l<=t; l++)
    {
        x.clear(),y.clear();
        scanf("%d %d",&c,&d);
        while(c--)
        {
            scanf("%d %d",&e,&f);
            if(f<e)
            {
                swap(e,f);
            }
            x.push_back(e);
            y.push_back(f);
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        printf("Case %d:\n",l);
        while(d--)
        {
            scanf("%d",&a);
            int m=upper_bound(x.begin(),x.end(),a)-x.begin();
            int n=lower_bound(y.begin(),y.end(),a)-y.begin();
            printf("%d\n",abs(m-n));
        }
    }
    return 0;
}
