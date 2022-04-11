#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0,i,j,k,l;
    string x;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>x;
        if(x[0]=='d')
        {
            cin>>a;
            d+=a;
        }
        if(x[0]=='r')
        {
            cout<<d<<endl;
        }

    }
    return 0;
}
