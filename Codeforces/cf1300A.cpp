#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c,d,e,f,i,j,k,l;
    cin>>b;
    while(b--)
    {
        d=0;
        e=0;
        cin>>c;
        for(i=0; i<c; i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                d++;
            }
            e+=a[i];
        }
        if(d==0)
        {
            if(e<0 || e>0)
            {
                cout<<"0\n";
            }
            else
            {
                cout<<"1\n";
            }

        }
        else
        {
            if(d+e==0)
            {
                cout<<d+1<<endl;
            }
            else
            {
                cout<<d<<endl;
            }
        }
    }
    return 0;
}
