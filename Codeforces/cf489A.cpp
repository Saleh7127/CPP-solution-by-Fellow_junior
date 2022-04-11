#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],b[1000],c,d,e=0,f,i,h,j,k,l;
    cin>>c;
    for(i=0;i<c;i++)
    {
        cin>>a[i];
    }
    cin>>d;
    for(i=0;i<d;i++)
    {
        cin>>b[i];
    }
    sort(a,a+c);
    sort(b,b+d);
    for(i=0;i<=c-1;i++)
    {
        for(j=0;j<=d-1;j++)
        {
            if(abs(a[i]-b[j])<=1)
            {
                e++;
                b[j]=-1;
                break;
            }
        }
    }
    cout<<e<<endl;
    return 0;
}
