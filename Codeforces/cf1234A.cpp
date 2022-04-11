#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j,k,l;
    cin>>a;
    while(a--)
    {

        cin>>b;
        int d=0,e=0;
        for(i=0;i<b;i++)
        {
            cin>>c;
            d+=c;
        }
        if(d%b==0) e=d/b;
        else e=d/b+1;
        cout<<e<<endl;
    }
    return 0;
}
