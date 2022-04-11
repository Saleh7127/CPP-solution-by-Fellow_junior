#include <bits/stdc++.h>
using namespace std;
#define test int t; cin>>t; while (t--)
#define ll long long int
#define Faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    Faster
    test
    {
        ll a,c=0,d,e,f,i,j,k,l;
        cin>>a;
        if(a==1) printf("FastestFinger\n");
        else if(a%2==1 || a==2) printf("Ashishgup\n");
        else
        {
            for(i=3;i<=sqrt(a);i++)
            {
                if(a%i==0)
                {
                    if(i%2!=0 || (a/i)%2!=0)
                    {
                        c=1;
                        break;
                    }
                }
            }
            if(c) printf("Ashishgup\n");
            else printf("FastestFinger\n");
        }
    }
    return 0;
}
