#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c=0,d,i,j,k,l;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>a[i];
        c+=abs(a[i]);
    }
    cout<<c<<endl;
    return 0;
}
