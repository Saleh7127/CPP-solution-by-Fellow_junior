#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[10000],b[10000],c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        j=0;
        cin>>c;
        for(i=0;i<c;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            {
                b[j]=a[i];
                j++;
            }
        }
        sort(b,b+j);
        for(k=0;k<j;k++)
        {
           printf("%d",b[j-1])
        }
    }
    return 0;
}
