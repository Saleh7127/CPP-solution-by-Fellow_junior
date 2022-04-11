#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll c[1000005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    test
    {
        ll b,d,e,f,i,j,k,l=0,x,s;

        cin>>b;

        vector<ll>a(2*b);

        for(i=0; i<2*b; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());


        for(i=0; i<2*b-1; i++)
        {
            for(j=0; j<2*b; j++)
            {
                c[a[j]]++;
            }

            j=2*b-1;

            x=a[i]+a[j];

            vector<ll>z;

            for(k=0; k<b; k++)
            {
                while(j>0 && c[a[j]]==0)
                {
                    j--;
                }

                z.push_back(a[j]);
                z.push_back(x-a[j]);

                c[a[j]]--;
                c[x-a[j]]--;

                if(c[a[j]]<0 || c[x-a[j]]<0)
                {
                    c[a[j]]=0;
                    c[x-a[j]]=0;
                    break;
                }

                x=max(a[j],x-a[j]);

                if(k+1==b)
                {
                    l=1;
                }
            }

            for(s=0; s<a.size(); s++)
            {
                c[a[s]]=0;
            }

            if(l==1)
            {
                cout<<"YES"<<endl;
                cout<<z[0]+z[1]<<endl;

                for(i=0; i<z.size(); i++)
                {
                    cout<<z[i]<<" ";
                    if(i%2) cout<<endl;
                }

                break;
            }
        }

        if(l==0) cout<<"NO"<<endl;

        for(s=0; s<a.size(); s++)
        {
            c[a[s]]=0;
        }

    }
    return 0;
}
