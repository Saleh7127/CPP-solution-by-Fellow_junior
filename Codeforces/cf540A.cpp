#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int c,d=0,e=0,f=0,i,j,k=0,l;
    cin>>c;
    cin>>a>>b;
    for(i=0;i<c;i++)
    {
        d=a[i]-b[i];
        e=b[i]-a[i];
        f=max(d,e);
        k+=min(10-f,f);
    }
    cout<<k<<endl;
}
