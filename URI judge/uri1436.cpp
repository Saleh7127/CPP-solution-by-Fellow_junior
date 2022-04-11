#include<iostream>
using namespace std;
int main()
{
    int a[100000],b,t,c,d,e,f,i,j,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>b;
        for(j=0;j<b;j++)
        {
            cin>>a[j];
        }
        d=a[b/2];
        cout<<"Case "<<i<<": "<<d<<endl;
    }
    return 0;
}
