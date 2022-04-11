/***
 created: 2021-11-22-16.05.25
***/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0
#define nl '\n'

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {
        ll x,n,m,i,j,k,l=1,h,ans,mid,y;

        cin>>n>>k;


        m=(n*(n+1))/2 + (n*(n-1))/2;

        if(m<=k)
        {
            cout<<2*n-1<<nl;
        }
        else
        {

            m=(n*(n+1))/2;

            if(m==k)
            {
                cout<<n<<nl;
            }

            else if(m>k)
            {
                l=1;
                h=n;
                while(l<=h)
                {
                    mid=(l+h)/2;

                    x=(mid*(mid+1))/2;

                    if(x==k)
                    {
                         ans=mid;
                         break;
                    }
                    else if(x<k)
                    {
                        ans=mid+1;
                        l=mid+1;
                    }
                    else
                    {
                        h=mid-1;
                    }
                }

                cout<<ans<<nl;
            }

            else
            {
                 l=1,h=2*n-1;

                 while(l<=h)
                 {
                      mid=(l+h)/2;

                      x=(mid*(mid+1))/2;


                      j=0;
                      y=0;

                      if(mid>n)
                      {
                           y=(mid-n);

                           y=y*(y+1);

                      }

                      x-=y;

                      if(x>=k)
                      {
                           ans=mid;
                           h=mid-1;
                      }
                      else l=mid+1;
                 }

                 cout<<ans<<nl;
            }
        }
    }


    get_lost_idiot;
}

