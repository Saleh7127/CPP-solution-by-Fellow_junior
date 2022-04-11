#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f,g,h,i,j,k,l;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>b>>c>>d>>e;
        cout<<"Case "<<i<<": ";
        f=abs(b-d);
        g=abs(c-e);
        if(g==f)
        {
            cout<<"1\n";
        }
        else
        {
            if(g%2==f%2)
            {
                cout<<"2\n";
            }
            else
            {
                cout<<"impossible\n";
            }
        }
    }
    return 0;
}
