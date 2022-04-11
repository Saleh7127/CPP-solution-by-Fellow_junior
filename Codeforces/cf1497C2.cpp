#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   test
   {
       ll n,k,i,l;

       cin>>n>>k;

       for(i=0;i<k-3;i++)
       {
           cout<<1<<" ";
       }
       n-=(k-3);
       if(n%2==0 && (n/2)%2==0)
       {

            cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;

       }
       else if(n%2==1 && (n/2)%2==1)
       {
           cout<<1<<" "<<(n/2)<<" "<<(n/2)<<endl;
       }
       else if(n%2==1 && ((n-1)/2)%2==0)
       {
           cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
       }
       else if(n%2==0 && (n/2)%2==1)
       {
           cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
       }

   }


   return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)

ll lcm(ll a,ll b)
{
    return (a / __gcd(a, b)) * b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,k,i,j,l,x=0;

        cin>>n;

        for(i=n/2; i>=1; i--)
        {
            for(j=i; j>=1; j--)
            {
                for(k=j; k>=1; k--)
                {
                    if(i+j+k==n)
                    {
                        ll a=lcm(i,j);
                        ll b=lcm(a,k);
                        if(b<=n/2)
                        {
                            x=1;
                            cout<<i<<" "<<j<<" "<<k<<endl;
                            break;
                        }
                    }
                }
                if(x) break;
            }
            if(x) break;
        }
    }


    return 0;
}
*/

