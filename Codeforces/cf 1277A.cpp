#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,c,d,e,f,i,j,k,l;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a<=9) printf("%d\n",a);
        else
        {
            c=0;
            for(i=1;i<=a;i=i*10+1)
            {
                c+=min(9,(a/i));
            }
            cout<<c<<endl;
        }
    }
}
