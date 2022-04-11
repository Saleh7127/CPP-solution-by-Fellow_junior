#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e=0,f=0,g=0,h=0,i,j,k,l;
    cin>>a>>b;
    for(i=0;i<a;i++)
    {
        cin>>c;
        if(c%2==1)
        {
            e++;
        }
        else f++;
    }
    for(i=0;i<b;i++)
    {
        cin>>d;
        if(d%2==1)
        {
            g++;
        }
        else h++;
    }
    int ans=min(e,h)+min(f,g);
    cout<<ans<<endl;
    return 0;
}
