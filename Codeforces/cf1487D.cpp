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
        ll n,a,b=4,i;
        cin>>n;
        for(i=2; ; i++)
        {
            if((b+1)>n) break;
            //cout<<b<<endl;
            b=b+(4*i);
        }

        cout<<i-2<<endl;

    }

    return 0;
}



/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll a[100000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,s,b=4,i,j=2,l=0;

    a[1]=5;

    for(i=2; ;i++)
    {
        if((b+1)>1000000005) break;

        b=b+(4*i);

        a[j]=b+1;

        j++;
    }

    test
    {
        cin>>n;
        l=0;
        for(i=1;i<=j;i++)
        {

            if(a[i]>n)
            {
                l=i-1;
                break;
            }
        }
        cout<<l<<endl;
    }


    return 0;
}
*/






