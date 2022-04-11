#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,d,e,f=0,i,j,k,l;
    cin>>a>>b;
    for(i=a; i<=b; i++)
    {
        d=i;
        e=0;
        int c[100]={0};
        while(d>0)
        {
            l=d%10;
            c[l]++;
            d/=10;
            if(c[l]>1)
            {
                e=1;
                break;
            }
        }
        if(e==0)
        {
            f=1;
            cout<<i<<endl;
            break;
        }
    }
    if(f==0)
    {
        cout<<"-1\n";
    }
    return 0;
}
