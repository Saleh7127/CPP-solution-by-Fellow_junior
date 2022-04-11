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

        ll n,m,i,j,k,l=0,o;
        string a[1000];
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        string x;
        for(o=0; o<n; o++)
        {
            x=a[o];
            for(i=0; i<m; i++)
            {
                for(char vv='a' ; vv<='z'; vv++)
                {
                    char dd=x[i];
                    x[i]=vv;
                    for(j=0; j<n; j++)
                    {
                        l=0;
                        for(k=0; k<m; k++)
                        {
                            if(x[k]!=a[j][k])
                            {
                                l++;
                                if(l>1)
                                {
                                    break;
                                }
                            }
                        }
                        if(l>1)
                        {
                            break;
                        }
                    }
                    if(l<=1)
                    {
                        break;
                    }
                    else
                    {
                        x[i]=dd;
                    }
                }
                if(l<=1)
                {
                    break;
                }
            }
            if(l<=1)
            {
                break;
            }
        }
        if(l<=1)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}
