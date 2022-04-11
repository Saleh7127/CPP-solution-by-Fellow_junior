#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],b[1000],c,d,e,f,i,j,k,l;
    cin>>c;
    for(i=0;i<c;i++)
    {
        cin>>a[i];
    }
    cin>>d;
    for(i=0;i<d;i++)
    {
        cin>>b[i];
    }
    sort(a,a+c,greater<int>());
    sort(b,b+d,greater<int>());
    cout<<a[0]<<" "<<b[0]<<endl;

    return 0;
}
