#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[200000],b,c,d=0,e,f,i,j,k,l;
    cin>>b;
    c=2*b;
    for(i=0;i<c;i++)
    {
        cin>>a[i];
    }
    sort(a,a+c);
    for(i=1;i<c;i++)
    {
        if(a[i]!=a[i-1])
            d++;
    }
    if(!d) cout<<-1<<endl;
    else
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[j]);
        }
        cout<<endl;
    }
    return 0;
}
