#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,a[100000],b,c,d,e,f,i,j,k,l;
    for(i=0,j=2; i<=15000; j++)
    {
        c=0;
        for(k=2; k*k<=j; k++)
        {
            if(j%k==0)
            {
                c=1;
            }
        }
        if(c==0)
        {
            a[i]=j;
            i++;
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>b;
        cout<<a[b-1]<<endl;
    }
    return 0;
}
