#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,c,d,e,f,i,j,k,l,t;
    cin>>t;
    while(t--)
    {
        b=0;
        cin>>a;
        l=a.size();
        for(i=0;i<l-1;i++)
        {
            if(a[i]!=a[i+1])
                b=1;
        }
        if(b)
        {
            for(i=0;i<l;i++)
            {
                printf("01");
            }
        }
        else cout<<a;
        cout<<endl;
    }
    return 0;
}
