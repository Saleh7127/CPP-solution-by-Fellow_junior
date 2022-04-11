#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,c=0,d=0,e=0,f,i,j,k,l;
    cin>>b;
    cin>>a;
    for(i=0;i<b;i++)
    {
        if(a[i]=='1') c++;
        else if(a[i]=='0') d++;
    }
    e=abs(d-c);
    cout<<e<<endl;
    return 0;
}
