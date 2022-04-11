#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,j,k,l;
    cin>>a;
    if(a==1 || a==2)
    {
        cout<<1<<"\n"<<1<<endl;
    }
    else if(a==3)
    {
        printf("2\n1 3\n");
    }
    else
    {
        printf("%d\n",a);
        for(i=2; i<=a; i+=2)
        {
            printf("%d ",i);
        }
        for(i=1; i<=a; i+=2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
