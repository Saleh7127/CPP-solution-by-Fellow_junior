#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d=0,e,i,j,k,l;
    string a;
    cin>>b>>c;
    cin>>a;
    if(c==0)
    {
        cout<<a<<endl;
        goto niche;
    }
    if(b==1)
    {
        cout<<"0\n";
        goto niche;
    }
    for(i=0; i<b && c>0; i++)
    {
        if(i==0 && a[i]!='1')
        {
            a[i]='1';
            c--;
        }
        else if(i!=0 && a[i]!='0')
        {
            a[i]='0';
            c--;
        }
    }
    cout<<a;
niche:
    ;
    return 0;
}
