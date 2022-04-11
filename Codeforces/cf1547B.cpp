#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll n,m=0,i,j,k,l=0,z;

        char c='z';

        string a;

        cin>>a;

        z=a.size()-1;

        char d='a'+z;

        map<char,ll>x;

        for(i=0; i<a.size(); i++)
        {
            x[a[i]]++;
            if(a[i]=='a')
            {
                j=i-1;
                k=i+1;
            }
            if(x[a[i]]>1 || a[i]>d) m=1;
        }

        if(m) cout<<"NO"<<endl;
        else
        {
            for(char cc='b'; cc<=d; cc++)
            {
                for(i=0; i<a.size(); i++)
                {
                    if(a[i]==cc)
                    {
                        if(i==j)
                        {
                            j=i-1;
                        }
                        else if(i==k)
                        {
                            k=i+1;
                        }
                        else
                        {
                            l=1;
                            break;
                        }
                    }
                }
                if(l) break;
            }
            if(l) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;

        }

    }


    return 0;
}
