#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,b,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>b;
        long long int a[b+5];
        d=0;
        e=0;
        f=0;
        for(i=1; i<=b; i++)
        {
            a[i]=0;
        }
        for(i=1; i<=b; i++)
        {
            cin>>c;
            a[c]++;
            if(a[c]==1)
            {
                d++;
            }
            e=max(e,a[c]);
        }
        f=max(min(d-1,e),min(d,e-1));
        cout<<f<<endl;
    }
    return 0;
}
