#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b=0,c=0,d=0,e,f,i,j,k,l,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==25)
        {
            b++; //25 er jonno b
        }
        if(a[i]==50)
        {
            b--;
            c++; //50 er jonno C;
        }
        if(a[i]==100)
        {
            if(c!=0)
            {
                c--;
                b--;
            }
            else
            {
                b-=3;
            }
        }
        if(b<0 || c<0)
        {
            d=1;
        }
    }
    if(a[0]>25)
    {
        cout<<"NO\n";
        return 0;
    }
    if(d)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
