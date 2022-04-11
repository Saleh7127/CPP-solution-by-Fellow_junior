#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a;
    int b,c=0,d=0,e=0,f,i,j,k,l;
    cin>>b;
    cin>>a;
    for(i=0; i<a.size()-1; i+=2)
    {
        if(a[i]==a[i+1])
        {
            c++;
            a[i]='a';
            a[i+1]='b';
        }
    }
    cout<<c<<endl;
    cout<<a<<endl;
    return 0;
}
