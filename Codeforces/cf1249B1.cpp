#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[10000],c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>c;
        for(i=1;i<=c;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=c;i++)
        {
            d=1;
            e=a[i];
            while(i!=e)
            {
                d++;
                e=a[e];
            }
            printf("%d ",d);
        }
        cout<<endl;
    }
    return 0;
}
