#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,e,i,j,k,l;
    string a,b,c;
    cin>>d;
    while(d--)
    {
        k=0;
        cin>>a>>b>>c;
        e=a.size();
        for(i=0;i<e;i++)
        {
            if(a[i]!=c[i] && b[i]!=c[i])
            {
                k=1;
            }
        }
        if(k==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
