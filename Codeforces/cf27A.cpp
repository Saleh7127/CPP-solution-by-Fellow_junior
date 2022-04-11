#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b[100000],c,d,e,f,i,j,k,l;
    cin>>c;
    for(j=0;j<100000;j++)
    {
        b[j]=0;
    }
    for(i=1;i<=c;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(i=1;i<100000;i++)
    {
        if(b[i]==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
