#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[1000],b[1000];
    int c,d,e,i,j,k,l;
    cin>>c>>d;
    for(i=0;i<c;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<d;i++)
    {
        cin>>b[i];
    }
    cin>>e;
    while(e--)
    {
        cin>>l;
        l--;
        cout<<a[l%c]<<b[l%d]<<endl;
    }
    return 0;
}
