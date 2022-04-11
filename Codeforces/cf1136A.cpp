#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c,d,e,f,i,j,k,l;
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>c>>a[i];
    }
    cin>>d;
    for(i=0;i<b;i++)
    {
        if(a[i]>=d)
        {
            break;
        }
    }
    cout<<b-i<<endl;
    return 0;
}
