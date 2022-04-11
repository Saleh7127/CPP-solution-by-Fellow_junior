#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b,c=0,d=0,e,f,i,j,k,l;
    cin>>b;
    for(i=0; i<b; i++)
    {
        cin>>a[i];
        if(a[i]==0)
            c++;
        else
            d++;
    }
    if(c==0) cout<<-1<<endl;
    else if(d<9) cout<<0<<endl;
    else
    {
        d=d/9;
        for(i=0; i<d; i++)
        {
            for(j=0; j<9; j++)
                printf("5");
        }
        for(i=0; i<c; i++)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
