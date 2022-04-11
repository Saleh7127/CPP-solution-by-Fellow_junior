#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 200005
ll phi[maX];
void seivePhi()
{
    phi[0]=0;
    phi[1]=2;
    ll i,j;
    for(i=2; i<=maX; i++)
    {
        phi[i] = i;
    }
    for(i=2; i<=maX; i++)
    {
        if(phi[i]==i)
        {
            for(j=i; j<=maX; j+=i)
            {
                phi[j] = phi[j]/i * (i-1);
                ///or phi[j]-= phi[j]/i;
            }
        }
        phi[i]=phi[i]+phi[i-1];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    seivePhi();

    ll a,b,c,d,e,f,i,j,k,l;

    while(cin>>a && a)
    {
        if(a==1)
        {
            cout<<"0/1"<<endl;
        }
        else if(a==2)
        {
            cout<<"1/1"<<endl;
        }
        else
        {
            ///b/c;

            b=lower_bound(phi,phi+maX,a)-phi;

            c=a-phi[b-1];

            d=0;

            for(i=1;i<=b;i++)
            {
                if(__gcd(i,b)==1)
                {
                    d++;
                }
                if(d==c)
                {
                    cout<<i<<"/"<<b<<endl;
                    break;
                }
            }

        }
    }


    return 0;
}
