#include<bits/stdc++.h>
using namespace std;
int e=0;
int main()
{
    int a[10000],c[10000],d,e,f,i,j,k=0,l,t;
    cin>>t;
    while(t--)
    {
        cin>>d>>e;
        k=0;
        for(i=0; i<d; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<e; i++)
        {
           cin>>c[i];
        }
        sort(c,c+e);
        for(i=0;i<d;i++)
        {
            for(j=0;j<e;j++)
            {
                if(a[c[j]]<a[c[j]-1])
                {
                    swap(a[c[j]],a[c[j]-1]);
                }
            }
        }
        ///is_sorted(a,a+d) check;
        for(i=1;i<d;i++)
        {
            if(a[i]<a[i-1])
            {
                k=1;
                break;
            }
        }
        if(k) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
