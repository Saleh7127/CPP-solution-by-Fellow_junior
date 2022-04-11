#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,p,l,c,d,e,f,i,j,k,q;
    scanf("%lld",&t);
    for(k=1; k<=t; k++)
    {
        cin>>p>>l;
        c=p-l;
        vector<ll>a;
        for(i=1; i*i<=c; i++)
        {
            if(c%i==0)
            {
                if(c/i!=i)
                {
                    if(c/i>l)
                        a.push_back(c/i);
                    if(i>l)
                        a.push_back(i);
                }
                else if(i>l)
                    a.push_back(i);
            }
        }
        if(a.size()==0)
            printf("Case %lld: impossible\n",k);
        else
        {
            sort(a.begin(),a.end());
            printf("Case %lld: ",k);
            for(j=0; j<a.size(); j++)
            {
                if(j<a.size()-1)
                    printf("%lld ",a[j]);
                else
                    printf("%lld\n",a[j]);
            }
        }
    }
    return 0;
}
