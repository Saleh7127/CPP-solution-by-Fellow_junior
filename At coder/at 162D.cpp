#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll b,c=0,i,j,k;
    string a;
    cin>>b;
    cin>>a;
    for(i=0;i<b;i++)
    {
        for(j=i+1;j<b;j++)
        {
            for(k=j+1;k<b;k++)
            {
                if(a[i]!=a[j] && a[i]!=a[k] && a[j]!=a[k] && (j-i)!=(k-j))
                {
                    c++;
                }
            }
        }
    }
    printf("%lld\n",c);
    return 0;
}
