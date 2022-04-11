#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d=0,e,f,i,j,k,l;
    cin>>b;
    int a[b];
    for(c=0;c<b;c++)
    {
        cin>>a[c];
        d+=a[c];
    }
    e=d/(b/2);
    for(i=0;i<b;i++)
    {
        if(a[i]==0) i++;
        for(j=i+1;j<b;j++)
        {
            if(a[i]+a[j]==e)
            {
                a[i]=0;
                a[j]=0;
                cout<<i+1<<" "<<j+1<<endl;
                break;
            }
        }
    }
    return 0;
}
