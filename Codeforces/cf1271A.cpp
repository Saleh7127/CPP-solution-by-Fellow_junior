#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i=0,j=0,k=0,l;
    cin>>a>>b>>c>>d>>e>>f;
    if(e>f)
    {
        while(a && d)
        {
            i++;
            a--;
            d--;
        }
        while(b && c && d)
        {
            j++;
            b--;
            c--;
            d--;
        }
    }
    else
    {
        while(b && c && d)
        {
            j++;
            b--;
            c--;
            d--;
        }
        while(a && d)
        {
            i++;
            a--;
            d--;
        }
    }
    k=(i*e)+(j*f);
    cout<<k<<endl;
    return 0;
}
