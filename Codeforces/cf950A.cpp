#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int r,a,b,c,d,f,i,j,k,l;
    cin>>l>>r>>a;
    while(a--)
    {
        if(l>r)
            r++;
        else
            l++;
    }
    b=2*min(l,r);
    cout<<b<<endl;
    return 0;
}
