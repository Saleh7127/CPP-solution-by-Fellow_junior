#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    while(scanf("%d",&a)!=EOF)
    {
        b=1;
        c=1;
        while(b%a!=0)
        {
            b=(10*b+1)%b;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
