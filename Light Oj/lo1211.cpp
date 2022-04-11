#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        int a=0,b=1000,c=0,d=1000,e=0,f=10000,g,h;
        cin>>g;
        int x1[1000],x[1000],y1[1000],y[1000],z1[1000],z[1000];
        for(i=0; i<g; i++)
        {
            cin>>x[i]>>y[i]>>z[i]>>x1[i]>>y1[i]>>z1[i];
        }
        int mn=100000;
        int mx=-1000;
        for(i=0; i<g; i++)
        {
            a=max(a,x[i]); //x1 er maxi;
            b=min(b,x1[i]); //x2 er mini shb gulai same;
            c=max(c,y[i]);
            d=min(d,y1[i]);
            e=max(e,z[i]);
            f=min(f,z1[i]);
        }
        int area=(b-a)*(d-c)*(f-e);
        printf("Case %d: ",k);
        if(area<0)
            cout<<0<<endl;
        else
            cout<<area<<endl;
    }
    return 0;
}
