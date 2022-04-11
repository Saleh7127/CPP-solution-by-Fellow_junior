#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,t,b,c,d,e,f,i,k,l;
    cin>>t;
    a=t/3;
    b=t%3;
    if(b==2)
    {
        a++;
    }
    c=a/12;
    d=a%12;
    printf("%d %d\n",c,d);
    return 0;
}
