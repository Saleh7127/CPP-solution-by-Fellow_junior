#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b,c,d=0,e=0,f,i,j,k,l;
    cin>>b>>c;
    for(i=0; i<b; i++)
    {
        cin>>a[i];
    }
    sort(a,a+b,greater<int>());
    for(i=0;i<b;i++)
    {
        e++;
        d+=a[i];
        if(d>=c)
        {
            break;
        }
    }
    cout<<e<<endl;
    return 0;
}
