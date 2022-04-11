#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,d=0,e,f,i,j,k,l;
    cin>>a;
    while(a--)
    {
        cin>>b;
        if(b%2==0) c++;
        else d++;
    }
    cout<<min(c,d)<<endl;
    return 0;
}

