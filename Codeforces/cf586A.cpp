#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b,c=0,d,e,f,i,j,k,l;
    cin>>b;
    for(k=1;k<b+1;k++)
    {
        cin>>a[k];
    }
    for(i=0;i<b;i++)
    {
        if((a[i]==1 && a[i+1]==0 && a[i+2]==1) || a[i+1]==1)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
