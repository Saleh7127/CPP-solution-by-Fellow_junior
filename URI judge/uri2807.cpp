#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[10000],c,d,e,f,i,j,k,l;
    cin>>a;
    b[0]=1;
    b[1]=1;
    for(i=2;i<50;i++)
    {
        b[i]=b[i-1]+b[i-2];
    }
    for(j=a-1;j>=0;j--)
    {
        if(j==0) cout<<b[j]<<endl;
        else cout<<b[j]<<" ";
    }

}
