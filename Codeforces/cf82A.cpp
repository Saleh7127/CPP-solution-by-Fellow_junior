#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,d,e,f,i,j,k,l;
    string x[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    cin>>a;
    while(a>5)
    {
        a=a/2-2;
    }
    cout<<x[a-1]<<endl;
    return 0;
}
