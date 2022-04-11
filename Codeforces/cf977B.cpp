#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000],e,f;
    int b,c,d=0,i,j,k,l;
    cin>>b;
    cin>>a;
    for(i=0; i<b-1; i++)
    {
        c=1;
        for(j=i+1; j<b-1; j++)
        {
            if(a[i]==a[j] && a[i+1]==a[j+1])
            {
                c++;
            }
        }
        if(c>d)
        {
            e=a[i];
            f=a[i+1];
            d=c;
        }
    }
    printf("%c%c\n",e,f);
    return 0;
}
