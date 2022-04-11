#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double a,b,c=0,d=0,e,f,i,j,k,l;
    cin>>a>>b;
    c=b*log(a);
    d=a*log(b);
    if(c<d) printf("<\n");
    else if(c>d) printf(">\n");
    else printf("=\n");
    return 0;
}
