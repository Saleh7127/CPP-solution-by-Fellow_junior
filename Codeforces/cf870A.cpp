#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],b[1000],c,d,e=0,f=0,i,j,k,l;
    cin>>c>>d;
    for(i=0; i<c; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<d; i++)
    {
        cin>>b[i];
    }
    sort(a,a+c);
    sort(b,b+d);
    if(c==1 && d==1)
    {
        if(a[0]==b[0])
        {
            cout<<a[0]<<endl;
        }
        else
        {
            e=min(a[0],b[0]);
            f=max(a[0],b[0]);
            cout<<e<<f<<endl;
        }
    }
    else if(c==1 || d==1)
    {
        if(c==1)
        {
            cout<<a[0]<<endl;
        }
        else if(d==1)
        {
            cout<<b[0]<<endl;
        }
    }
    else
    {
        for(i=0; i<c; i++)
        {
            for(j=0; j<d; j++)
            {
                if(a[i]==b[j])
                {
                    cout<<a[i]<<endl;
                    return 0;
                }
            }
        }
        e=min(a[0],b[0]);
        f=max(a[0],b[0]);
        cout<<e<<f<<endl;
    }
    return 0;
}
