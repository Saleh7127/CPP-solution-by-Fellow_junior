#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000],b[1000],c[1000],d[1000];
    int e,f,i,j,k,l;
    cin>>a>>b>>e;
    cout<<a<<" "<<b<<endl;
    for(i=0;i<e;i++)
    {
        cin>>c>>d;
        f=strcmp(c,a);
        if(f==0)
        {
            strcpy(a,d);
        }
        else
        {
            strcpy(b,d);
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
