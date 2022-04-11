#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

    test
    {

        ll n,m,i,j,k,l=0,p,q,s;

        cin>>n>>m>>s>>p>>q;

        ll a[s+2],b[s+2];

        a[0]=b[0]=1;

        for(i=1;i<=s;i++)
        {
             a[i]=a[i-1]+p;
             b[i]=b[i-1]+q;

             while(a[i]>n)
             {
                  a[i]=a[i]-n+m-1;
                  ///cut the cycle of (n-m+1);
             }

             while(b[i]>n)
             {
                  b[i]=b[i]-n+m-1;
                  ///cut the cycle of (n-m+1);
             }

             if(a[i]==b[i]) l++;
        }


        cout<<l<<endl;
    }


   return 0;
}



/*


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

ll sol(ll n,ll m,ll x,ll y)
{
    x+=y;

    if(x<=m) return x;

    x-=m;

    return m+(x%(n-m+1));
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    test
    {

        ll n,m,i,j,k,l=0,p,q,s;

        cin>>n>>m>>s>>p>>q;
        j=1,k=1;

        for(i=1; i<=s; i++)
        {
            j=sol(n,m,j,p);
            k=sol(n,m,k,q);

            if(j==k) l++;
        }
        cout<<l<<endl;
    }



//    new_pillarPosition = M +(current_pillarPosition + speed - M) % (N-M+1)
//    To reach to this formula,
//    we have to observe that
//    there is a cycle of length (N-M+1),
//    but a extra M is present in the pillar position,
//    which we can remove,
//    then add the speed and find the new position
//    in the cycle by taking a MOD with cycle length,
//    then add M again, to get the actual pillar number.

    return 0;
}
*/
