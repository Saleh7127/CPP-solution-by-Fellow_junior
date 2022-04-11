#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    string a;
    ll c,d,e,f,i,j,k=0,x[1000]={0};
    for(i=1; i<=100; i++)
    {
        x[i]=i;
    }
    test
    {
        cin>>a>>c;
        if(a=="ADD")
        {
            for(i=1; i<=100; i++)
            {
                if(x[i]>-1) x[i]+=c;
            }
        }
        else if(a=="SUBTRACT")
        {
            for(i=1; i<=100; i++)
            {
                x[i]-=c;
            }
        }
        else if(a=="DIVIDE")
        {
            for(i=1; i<=100; i++)
            {
                if(x[i]>-1)
                {
                    if(x[i]%c==0) x[i]/=c;
                    else x[i]=-1;
                }
            }
        }
        else
        {

            for(i=1; i<=100; i++)
            {
                x[i]*=c;
            }

        }
    }
    for(i=1; i<=100; i++)
    {
        if(x[i]<0) k++;
    }
    cout<<k<<endl;
    return 0;
}
