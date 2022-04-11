#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {


        ll n,a=0,b=0,c=0,d,e,f,i,j,l,k=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>f;
            d=f%3;
            if(d==0) a++;
            else if(d==1) b++;
            else c++;
        }
        e=n/3;
        if(a<e)
        {
            k+=(e-a);
            c-=k;
            if(b<c)
            {
                k+=(2*(c-e));
            }
            else
            {
                k+=(b-e);
            }

        }
        else
        {
            k+=(a-e);
            b=b+a-e;
            if(b<c)
            {
                k+=(2*(c-e));
            }
            else
            {
                k+=(b-e);
            }

        }
        cout<<k<<endl;
    }



    return 0;
}
