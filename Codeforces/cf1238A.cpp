#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,i,j,k,l,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        c=a-b;
        if(c!=1 && (c%2==0 || (c-1)%2==0))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
