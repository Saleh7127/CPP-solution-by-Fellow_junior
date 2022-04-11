#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000];
int main()
{
    int c,d,e,f,i,k,l;
    cin>>c;
    cin>>d>>e;
    for(i=d; i<=e; i++)
    {
        if(i%c==0)
        {
            printf("OK\n");
            return 0;
        }
    }
    printf("NG\n");
    return 0;
}
