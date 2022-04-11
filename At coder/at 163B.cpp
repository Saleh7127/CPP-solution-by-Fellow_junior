#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c[100000],d=0,e,f,i,j,k,l;
    cin>>a>>b;
    for(i=0;i<b;i++)
    {
        cin>>c[i];
        d+=c[i];
    }
    if(d>a) cout<<-1<<endl;
    else cout<<a-d<<endl;
    return 0;

}

