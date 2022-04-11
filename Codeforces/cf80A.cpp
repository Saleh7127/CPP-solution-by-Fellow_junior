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
    cin>>e>>f;
    for(l=0;l<60;l++)
    {
        if(a[l]==e && a[l+1]==f)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
