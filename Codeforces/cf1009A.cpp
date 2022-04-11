#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b[100000],c,d,e=0,f,i,j,k,l;
    cin>>c>>d;
    for(k=0;k<c;k++)
    {
        cin>>a[k];
    }
    for(k=0;k<d;k++)
    {
        cin>>b[k];
    }
    for(i=0;i<c;i++)
    {
        if(e<c && b[e]>=a[i])
        {
            e++;
        }
    }
    cout<<e<<endl;
    return 0;
}
