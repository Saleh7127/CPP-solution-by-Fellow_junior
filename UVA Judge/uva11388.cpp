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
   ll a,b,c,d,e,f,i,j,k,l;
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        if(c%b!=0)
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<b<<" "<<c<<endl;
        }
    }
    return 0;
}
