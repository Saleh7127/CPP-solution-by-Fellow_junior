#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d=0,e=0,f,i,j,k,l;
    cin>>b>>c;
    int a[b];
    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<b-1;i++)
    {
        d=a[i+1]-a[i];
        if(d<=c)
        {
            e++;
        }
        else e=0;
    }
    cout<<e+1<<endl;
    return 0;
}
