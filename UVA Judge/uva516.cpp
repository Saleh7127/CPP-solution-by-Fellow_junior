#include <bits/stdc++.h>
using namespace std;
#define maX 40008
#define ll long long
bool marked[maX];
vector<ll>p;
void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(ll i=4; i<=maX; i+=2)
    {
        marked[i]=1;
    }
    p.push_back(2);
    for(ll i=3; i<=maX; i+=2)
    {
        if(marked[i]==0)
        {
            p.push_back(i);
            for(ll j=i*i; j<=maX; j+=i+i)
            {
                marked[j]=1;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();

    string x;

    while(getline(cin,x))
    {
        if(x=="0" && x.size()==1) break;

        ll d=0,e=0,f,i,j=0,k,l,ans=1;
        ll ss=x.size();
        for(i=0; i<ss; i++)
        {
            if(x[i]==' ')
            {
                j++;
                if(j%2==0 && j>0)
                {
                    l=pow(d,e);
                    ans*=l;
                    d=0;
                    e=0;
                    j=0;
                }
            }
            else if(j%2==0 || j==0)
            {
                d=d*10+(x[i]-'0');

            }
            else if(j%2==1)
            {
                e=e*10+(x[i]-'0');
            }
        }
        ans*=pow(d,e);
        ans=ans-1;
        vector<ll>a,c;
        ll cnt;
        j=0;
        for(i=0;p[i]*p[i]<=ans;i++)
        {
            if(ans%p[i]==0)
            {
                cnt=0;
                while(ans%p[i]==0)
                {
                    ans/=p[i];
                    cnt++;
                }
                a.push_back(p[i]);
                c.push_back(cnt);
            }
        }
        if(ans>1)
        {
            a.push_back(ans);
            c.push_back(1);
        }
        for(k=a.size()-1;k>=0;k--)
        {
            if(k==a.size()-1)
            {
                cout<<a[k]<<" "<<c[k];
            }
            else cout<<" "<<a[k]<<" "<<c[k];
        }
        cout<<endl;
    }
    return 0;
}
