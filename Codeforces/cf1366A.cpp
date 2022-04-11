#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1)
#define yes printf("YES\n");
#define no printf("NO\n");
int main()
{
    Faster
    test
    {
        int a,c,d,e,f,i,j,k,l;
        cin>>a>>c;
        if(a==0 || c==0) cout<<0<<endl;
        else if(a*2<=c || c*2<=a)
        {
            cout<<min(a,c)<<endl;
        }
        else
        {
            d=a+c;
            cout<<d/3<<endl;
        }
    }
    return 0;
}
