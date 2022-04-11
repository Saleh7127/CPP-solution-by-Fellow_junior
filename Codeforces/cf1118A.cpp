#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long a,b,c,d,e,f,i,j,k,l,m;
    cin>>a;
    while(a--)
    {
        f=0;
        e=0;
        cin>>b>>c>>d;
        if(d%2!=0) e=d/2+1;
        else if(d%2==0) e=d/2;
        if(b==1)
        {
            cout<<c<<endl;
            goto niche;
        }
        if(e<=c)
        {
            f=(b/2)*d + (b%2)*c;
        }
        else if(e>c)
        {
            f=b*c;
        }
        cout<<f<<endl;
        niche:;
    }
    return 0;
}
