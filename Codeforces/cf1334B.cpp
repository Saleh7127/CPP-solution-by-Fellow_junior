#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[200000],b,c,d,e,f,i,j,k,l;
    cin>>b;
    while(b--)
    {
        cin>>c>>d;
        f=0;
        e=0;
        k=0;
        l=0;
        for(i=0; i<c; i++)
        {
            cin>>a[i];
            if(a[i]>=d)
                e++;
        }
        if(e==0)
        {
            printf("0\n");
            continue;
        }
        sort(a,a+c,greater<int>());
        for(j=0; j<c; j++)
        {
            if(a[j]>=d)
            {
                f+=a[j]-d;
                a[j]=d;
            }
            else
            {
                k=d-a[j];
                if(f-k>=0)
                {
                    a[j]=a[j]+k;
                    f-=k;
                }
                else a[j]=a[j];
            }
        }
        for(j=0; j<c; j++)
        {
            if(a[j]>=d)
            {
               l++;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}
