#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a[10000],c,d=0,e=0,f=0,i,j,k,l;
    cin>>c;
    for(i=0; i<c; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<c; i++)
    {
        if(a[i]==0) d++;
        e=d;
        for(j=i; j<c; j++)
        {
            if(a[j]==1)
            {
                e++;
            }
        }
        f=max(f,e);
    }
    cout<<f<<endl;
    return 0;
}
