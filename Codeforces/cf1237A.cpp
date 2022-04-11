#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b,c=1,d,e,f,i,j,k,l;
    cin>>b;
    for(i=0; i<b; i++)
    {
        cin>>a[i];
    }
    for(j=0; j<b; j++)
    {
        if(a[j]%2)
        {
            printf("%d\n",(c+a[j])/2);
            c*=-1;
            //for the difference of odd and even number;
        }
        else printf("%d\n",a[j]/2);
    }
    return 0;
}
