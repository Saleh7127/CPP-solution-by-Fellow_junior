#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100000],*b;
    cin>>a;
    if((b=strstr(a,"AB"))&&(strstr(b+2,"BA"))) cout<<"YES\n";
    else if((b=strstr(a,"BA"))&&(strstr(b+2,"AB"))) cout<<"YES\n";
    else cout<<"NO\n";
}
