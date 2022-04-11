#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,c,d,e,f,i,j,k,l;
    string a;
    cin>>t;
    d=0;
    for(i=1;i<=t;i++)
    {
        d=0;
        cin>>b;
        printf("Case %d:\n",i);
        for(j=0;j<b;j++)
        {
            cin>>a;
            if(a[0]=='d')
            {
               cin>>c;
               d+=c;
            }
            if(a[0]=='r')
            {
                cout<<d<<endl;
            }
        }
    }
    return 0;
}
