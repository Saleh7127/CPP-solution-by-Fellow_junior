#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        for(int i=0; i<3; i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        if(a[2]>a[1]+a[0]+1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
