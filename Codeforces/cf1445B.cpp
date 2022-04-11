#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int t;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {
        int a,b,c,d,x,y;
        cin>>a>>b>>c>>d;

        x=a+b;
        y=c+d;


        cout<<max(x,y)<<endl;

    }

    return 0;
}
