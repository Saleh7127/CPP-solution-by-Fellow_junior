#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define pi acos(-1)
int main()
{
    int a[200005],c,d=0,e=-1000,f,i,j,k,l;
    cin>>c;
    for(i=0; i<c; i++)
    {
        cin>>a[i];
    }
    for(j=0; j<2*c; j++)
    {
        if(a[j%c]==1) d++;
        else
        {
            e=max(e,d);
            d=0;
        }
    }
    cout<<e<<endl;
    return 0;
}
