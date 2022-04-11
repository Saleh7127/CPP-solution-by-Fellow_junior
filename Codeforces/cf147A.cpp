#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,k,l;
    cin>>a;
    l=a.size();
    for(i=0;i<l;i++)
    {
        if(a[i]!=' ' || a[i+1]>=97)
        {
            cout<<a[i];
        }
        if(a[i]>' ' && a[i]<97)
        {
            a[i]=' ';
            i--;
        }
    }
    return 0;
}
