#include<bits/stdc++.h>
using namespace std;
int main()
{
        long double a,b;
        cin>>a;

        b=abs(a);

        if(b<=127)
            cout<<"byte";
        else if(b<=32767)
            cout<<"short";
        else if(b<=2147483647)
            cout<<"int";
        else if(b<=9223372036854775807)
            cout<<"long";
        else
            cout<<"BigInteger";

        return 0;
}
