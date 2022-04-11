#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
#define maX 1000008

ll f[10002];
ll ans[10000];

vector<ll>p;
bool marked[maX];

void sieve()
{
    marked[0]=1;
    marked[1]=1;
    for(ll i=4; i<=maX; i+=2)
    {
        marked[i]=1;
    }
    for(ll i=3; i<=maX; i+=2)
    {
        if(marked[i]==0)
        {
            for(ll j=i*i; j<=maX; j+=i+i)
            {
                marked[j]=1;
            }
        }
    }
    p.push_back(2);
    for(ll i=3; i<=maX; i+=2)
    {
        if(marked[i]==0)
        {
            p.push_back(i);
        }
    }
}

ll multi(ll x,ll res_size)
{
    ll carry = 0;

    for (ll i=0; i<res_size; i++)
    {
        ll prod = ans[i] * x + carry;
        ans[i] = prod % 10;
        carry  = prod/10;
    }

    while (carry)
    {
        ans[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

string multi(string nums1,string nums2)
{
    ll l1 = nums1.size();
    ll l2 = nums2.size();

    ll i,j;

    string str( l1 + l2, '0');

    for(i=l1-1; i>= 0; i--)
    {
        for(j=l2-1; j>= 0; j--)
        {
            ll p = (nums1[i]-'0')*(nums2[j]-'0') + (str[i+j+1]-'0');
            str[i+j+1] = p%10 + '0';
            str[i+j] += p/10;
        }
    }
    for(i=0; i<l1+l2; i++)
    {
        if(str[i]!= '0')
        {
            return str.substr(i);
        }
    }
    return "0";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    sieve();

    test
    {
        memset(f,0,sizeof(f));

        ll n,m,i,j,k,l;

        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>m;

            for(j=0; j<p.size() && p[j]*p[j]<=m; j++)
            {
                k=0;
                if(m%p[j]==0)
                {
                    while(m%p[j]==0)
                    {
                        m/=p[j];
                        k++;
                    }

                    f[p[j]]=max(f[p[j]],k);
                }
            }

            if(m>1)
            {
                f[m]=max(f[m],1LL);
            }
        }

        string x="1";

        for(i=1; i<=10000; i++)
        {
            if(f[i]>0)
            {
                m=pow(i,f[i]);

                string y=to_string(m);

                x=multi(x,y);
            }
        }

        cout<<"Case "<<cs<<": "<<x<<endl;

        ///gun kore proti digit alada index ay raikha

        /*
        memset(ans,0,sizeof(ans));
        ans[0]=1;
        l=1;

        for(i=1; i<=10000; i++)
        {
            if(f[i]!=0)
            {
                m=pow(i,f[i]);
                l=multi(m,l);
            }
        }

        cout<<"Case "<<cs<<": ";

        for(i=l-1; i>=0; i--)
        {
            cout<<ans[i];
        }
        cout<<endl;
        */

    }

    return 0;
}
