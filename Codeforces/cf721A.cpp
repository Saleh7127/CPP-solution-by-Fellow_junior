#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b[1000],c,d=0,e,f,i,j=0,k,l;
    string a;
    cin>>c;
    cin>>a;
    for(i=0;i<=c;i++)
    {
        if(a[i]=='B')
        {
            d++;
        }
        else if(d!=0)
        {
            b[j++]=d;
            d=0;
        }
    }
    cout<<j<<endl;
    for(k=0;k<j;k++)
    {
        if(k==j-1) cout<<b[k]<<endl;
        else cout<<b[k]<<" ";
    }
}
