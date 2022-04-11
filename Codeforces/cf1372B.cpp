#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define fellow_junior  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fellow_junior

    test
    {
        ll a,c,d,e=0,f,i,j,k;
        cin>>a;
        if(a%2==0)
        {
            cout<<a/2<<" "<<a/2<<endl;
        }
        else
        {
            for(i=2;i*i<=a;i++)
            {
                if(a%i==0)
                {
                    d=a/i;
                    e=1;
                    break;
                }
            }
           if(e==0) cout<<1<<" "<<a-1<<endl;
           else cout<<d<< " "<<a-d<<endl;
        }
    }
    return 0;
}
