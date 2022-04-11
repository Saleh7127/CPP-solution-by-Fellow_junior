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

        int a,b=0,c,d,i,j,k,l=1e5;

        cin>>a;

        int n[a+4];

        for(i=0; i<a; i++)
        {
            cin>>n[i];
            l=min(l,n[i]);
        }

        for(i=0; i<a; i++)
        {
            if(n[i]==l) b++;
        }
        cout<<a-b<<endl;

    }

    return 0;
}

