#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,e,a[10000],f,i,j,k,l;
    cin>>b;
    while(b--)
    {
        cin>>c>>d;
        for(i=0; i<c; i++)
        {
            cin>>a[i];
        }
        for(j=0; j<d; j++)
        {
            for(k=1; k<c; k++)
            {
                if(a[k]!=0)
                {
                    a[k-1]=a[k-1]+1;
                    a[k]=a[k]-1;
                    break;
                }
            }
        }
        cout<<a[0]<<endl;
    }
    return 0;
}
