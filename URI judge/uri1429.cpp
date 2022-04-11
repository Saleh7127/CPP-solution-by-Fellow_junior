#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    while(a!="0")
    {
        long long int d,e,f=0,i,j,k,l;
        l=a.size();
        int b[6],c[l];
        b[4]=120;
        b[3]=24;
        b[2]=6;
        b[1]=2;
        b[0]=1;
        for(i=0;i<l;i++)
        {
            c[i]=a[i]-48;
        }
        for(i=0,j=l-1;i<l;i++,j--)
        {
            f=f+(c[i]*b[j]);
        }
        cout<<f<<endl;
        cin>>a;
    }
    return 0;
}
