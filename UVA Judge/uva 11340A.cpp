#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ll t,b,d;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>b;
        char c[b];
        int value[b];
        for(int i=0;i<b;i++)
        {
            cin>>c[i]>>value[i];
        }
        double ans=0;
        cin>>d;
        while(d--)
        {
            getline(cin,a);
            for(int j=0;j<a.size();j++)
            {
                for(int k=0;k<b;k++)
                {
                    if(a[j]==c[k])
                    {
                        ans+=(double)value[k];
                    }
                }
            }
        }
         printf("%.2lf$\n",ans/100.00);
    }
    return 0;
}
