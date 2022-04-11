#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b=0,c,d,ef,i,j,k;
    cin>>a;
    while(a>9)
    {
        b++;
        a+=1;
        while(a%10==0)
        {
            a=a/10;
        }
    }
    b+=9;
    cout<<b<<endl;
    return 0;
}
