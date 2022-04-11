#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    cin>>a;
    if(a==1 || a==2) cout<<"No\n";

    else
    {
        cout<<"Yes\n";
        printf("%d ",a/2);
        for(i=2;i<=a;i+=2)
        {
            if(i==a || i==a-1) printf("%d\n",i);
            else printf("%d ",i);
        }
        printf("%d ",(a+1)/2);
        for(i=1;i<=a;i+=2)
        {
            if(i==a-1 || i==a) printf("%d\n",i);
            else printf("%d ",i);
        }

    }
    return 0;
}
