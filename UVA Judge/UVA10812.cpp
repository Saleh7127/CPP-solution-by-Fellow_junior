#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,d,s,n,t,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>s>>d;
        if((s+d)%2==0 && s>=d)
        {
            a=(s+d)/2;
            b=s-a;
            cout<<max(a,b)<<" "<<min(a,b)<<endl;
        }
        else cout <<"impossible\n";

    }
    return 0;
}
