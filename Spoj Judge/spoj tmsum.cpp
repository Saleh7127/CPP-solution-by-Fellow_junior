#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[100000],b,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        d=0;
        cin>>b;
        for(i=1;i<=b;i++)
        {
            cin>>a[i];
        }
        if(b%2==0)
        {
            for(i=3;i<=b;i+=2)
            {
                d+=(a[i]*a[i+1]);
            }
            d=d+3;
            cout<<d<<endl;
        }
        else if(b%2!=0)
        {
            for(i=2;i<=b;i+=2)
            {
                d+=(a[i]*a[i+1]);
            }
            d=d+1;
            cout<<d<<endl;
        }
    }
    return 0;
}
