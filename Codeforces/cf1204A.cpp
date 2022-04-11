#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,c,e,i,j,k,l;
    cin>>a;
    l=a.size();
    b=l;
    for(i=l;i>0;i--)
    {
        if(a[i]=='1')
        {
            b++;
            break;
        }
    }
    cout<<b/2<<endl;
    return 0;
}
