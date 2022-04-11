#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long b,c,d,e,f,i,j,k,t,l;
    cin>>t;
    while(t--)
    {
        for(i=0; i<9; i++)
        {
            char a[100];
            scanf("%s",a);
            for(j=0; j<9; j++)
            {
                if(a[j]=='6')
                    a[j]='7';
            }
            printf("%s\n",a);
        }
    }
    return 0;
}
