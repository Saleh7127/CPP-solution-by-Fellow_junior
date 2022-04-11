#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num[10000],div[10000],di,a,b,c,d,e,f,i,j,k,l;
    num[0]=1;
    div[0]=1;
    for(i=1;i<1000;i++)
    {
        di=0;
        num[i]=i+1;
        for(j=1;j*j<=num[i];j++)
        {
            if(num[i]%j==0)
            {
                if(j*j==num[i]) di+=1;
                else di+=2;
            }
        }
        div[i]=di;
    }
    for(i=0;i<1000;i++)
    {
        for(j=0;j<999;j++)
        {
            if(div[j]>div[j+1])
            {
                swap(div[j],div[j+1]);
                swap(num[j],num[j+1]);
            }
            else if(div[j]==div[j+1] && num[j+1]>num[j])
            {
                swap(div[j],div[j+1]);
                swap(num[j],num[j+1]);
            }
        }
    }
    cin>>a;
    for(k=1;k<=a;k++)
    {
        cin>>b;
        printf("Case %d: %d\n",k,num[b-1]);
    }
    return 0;
}
