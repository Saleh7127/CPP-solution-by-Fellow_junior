#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c=0,d=0,e=0,f,g,h,i,j,k,l;
    cin>>a;
    while(a--)
    {
        cin>>b;
        if(b==0)
        {
            c=1;
            e++;
        }
        else if(b>0)
        {
            e=e+(b-1);
        }
        else if(b<0)
        {
            e=e+(-1-b);
            d++;
        }
    }
    if(c==1)
    {
        cout<<e<<endl;
        return 0;
    }
    else
    {
        if(d%2>0)
            e+=2;
        cout<<e<<endl;
    }
    return 0;
}
