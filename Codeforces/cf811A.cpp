#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c=1,d,e,f,i,j,l;
    cin>>a>>b;
    while(1)
    {
        if(a<0)
        {
            cout<<"Vladik\n";
            return 0;
        }
        if(b<0)
        {
            cout<<"Valera\n";
            return 0;
        }
        if(c%2==1)
        {
            a=a-c;
        }
        else
        {
            b=b-c;
        }
        c++;
    }
    return 0;
}
