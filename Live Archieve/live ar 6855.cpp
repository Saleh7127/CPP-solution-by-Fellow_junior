#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a[200000],c,d,e,i,j,k,l;
    while(cin>>c)
    {
        for(i=0; i<c; i++)
        {
            cin>>a[i];
        }
        d=0;
        while(1)
        {
            e=0;
            for(i=0; i<c; i++)
            {
                if(a[i]<0)
                {
                    d++;
                    e=1;
                    a[i]=abs(a[i]);
                    if(i==0)
                    {
                        a[c-1]-=a[i];
                    }
                    else a[i-1]-=a[i];
                    if(i==c-1)
                    {
                        a[0]-=a[i];
                    }
                    else a[i+1]-=a[i];
                }
            }
            if(e==0) break;
        }
        cout<<d<<endl;
    }
    return 0;
}
