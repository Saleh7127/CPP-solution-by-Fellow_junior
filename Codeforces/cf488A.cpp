#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,i,j,k;
    cin>>a;
    b=a++;
    while(1)
    {
        c=a;
        while(a)
        {
            if(abs(a%10)==8)
            {
                cout<<c-b<<endl;
                return 0;
            }
            a=a/10;
        }
        a=c+1;
    }
    return 0;
}
