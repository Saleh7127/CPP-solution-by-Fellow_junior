#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1)
#define yes printf("YES\n");
#define no printf("NO\n");
#include<bits/stdc++.h>
int main()
{
    int t,a,b,c,d,e,f,i,j,k,l;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        d=b+c;
        if(d%a==0)
        {
            printf("Case %d: %d\n",i,a);
        }
        else
        {
            printf("Case %d: %d\n",i,d%a);
        }
    }
    return 0;
}
