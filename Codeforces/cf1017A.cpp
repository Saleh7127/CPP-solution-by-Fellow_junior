#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f=0,g=0,i,j,k=0,l;
    cin>>a;
    cin>>b>>c>>d>>e;
    f=b+c+d+e;
    for(i=1;i<a;i++)
    {
        cin>>b>>c>>d>>e;
        g=b+c+d+e;
        if(g>f) k++;
    }
    cout<<k+1<<endl;
    return 0;
}
