#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int b,c,d,e,f,i,j,k,l,m,n;
    cin>>n;
    while(n--)
    {
        c=0;
        cin>>b;
        vector<int>a(b);
        for(i=0;i<b;i++)
        {
           cin>>a[i];
        }
        for(i=0;i<b-2;i++)
        {
            for(j=i+2;j<b;j++)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            }
        }
        if(c==0) cout<<"NO\n";
        else cout<<"YEs\n";
    }
    return 0;
}
