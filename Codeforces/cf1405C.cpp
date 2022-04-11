#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; while(t--)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        string a;
        ll c,d,e,f,n,k,l=0,i,j,x,y;
        cin>>n>>k>>a;
        for(i=0; i<=n-k; i++)
        {
            d=0;
            e=0;
            f=0;
            for(j=i; j<i+k; j++)
            {
                if(a[j]=='1') d++;
                else if(a[j]=='0') e++;
                else
                {
                    if(d<e)
                    {
                        a[j]='1';
                        d++;
                    }
                    else if(e<d)
                    {
                        a[j]='0';
                        e++;
                    }
                    else
                    {
                        a[j]='1';
                        d++;
                    }
                }
            }
            if(d!=e)
            {
                l=1;
                break;
            }
        }
        if(l==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
