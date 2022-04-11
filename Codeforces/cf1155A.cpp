#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,c,d=0,e,f,i,j,k,l;
    cin>>b;
    cin>>a;
    for(i=1;i<b;i++)
    {
        if(a[i-1]>a[i])
        {
            printf("YES\n%d %d\n",i,i+1);
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
