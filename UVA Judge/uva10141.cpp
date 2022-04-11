#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,c,d,i=1,aval;
    string ans,product,y;
    double x;
    while(1)
    {
        cin>>a>>c;
        if(a==0 && c==0) break;
        getchar();
        while(a--)
        {
            getline(cin,product);
        }
        ll need=-100;
        double value=0.0;
        while(c--)
        {
            getline(cin,product);
            cin>>x>>aval;
            getchar();
            if(aval>need)
            {
                need=aval;
                ans=product;
                value=x;
            }
            else if(aval==need && x<value)
            {
                need=aval;
                ans=product;
                value=x;
            }
            while(aval--)
            {
                getline(cin,y);
            }
        }
        if(i>1) printf("\n");
        printf("RFP #%lld\n",i++);
        cout<<ans<<endl;
    }
    return 0;
}
