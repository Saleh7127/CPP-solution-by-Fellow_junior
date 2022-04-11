#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,i;
    cin>>a;
    b=a;
    for(i=1; i<a; i++)
    {
        b+=(a-i)*i;
    }
    cout<<b<<endl;
    return 0;
}
