#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,a,b,c,d,e,f,i,j,k,l;
    while(cin>>a && a)
    {
        c=0;
        b=0;
        d=0;
        if(a==1)
        {
             cout<<"No solution\n";
             continue;
        }
        for(i=1;i*i<=a;i++)
        {
            for(j=0;j<i;j++)
            {
                if((i*i*i)-(j*j*j)==a)
                {
                    b++;
                    c=i;
                    d=j;
                    break;
                }
            }
            if(b>0) break;
        }
        if(b!=0)
        {
           cout<<c<<" "<<d<<endl;
        }
        else
        {
            cout<<"No solution\n";
        }
    }
    return 0;
}
