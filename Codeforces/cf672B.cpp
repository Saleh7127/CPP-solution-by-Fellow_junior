#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b[26]={0},c,d=0,e,f,i,j,k,l;
    cin>>c;
    string a;
    cin>>a;
    if(c>26)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=0;i<c;i++)
    {
        b[a[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(b[i]>1)
        {
            d+=b[i]-1;
        }
    }
    cout<<d<<endl;
    return 0;
}
