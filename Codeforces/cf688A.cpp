#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,c,d,e=0,f=0,i,j,k,l;
    cin>>b>>c;
    while(c--)
    {
         d=0;
        cin>>a;
        for(i=0; i<b; i++)
        {
            if(a[i]=='0')
                d=1;
        }
        if(d==1)
            e++;
        else
            e=0;
        if(e>f)
        {
            f=e;
        }
    }
    cout<<f<<endl;
    return 0;
}
