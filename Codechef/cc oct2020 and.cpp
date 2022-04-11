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
        ll a,c,d,e,f,i,j,k,l=0,x;
        cin>>a;
        for(i=1; i<=32; i++)
        {
            j=pow(2,i);
            if(j==a)
            {
                l=1;
                break;
            }
            else if(j>a)
            {
                x=i-1;
                break;
            }
        }
        if(l)
        {
            cout<<-1<<endl;
        }
        else if(a==1) cout<<1<<endl;
        else if(a==3) cout<<"1 3 2"<<endl;
        else if(a==5) cout<<"2 3 1 5 4"<<endl;
        else if(a==6) cout<<"2 3 1 5 4 6"<<endl;
        else
        {
            vector<ll>z;
            for(i=a;i>=7;i--)
            {
                z.push_back(i);
            }
            for(i=0;i<z.size();i++)
            {
                if(z[i]==pow(2,x))
                {
                    swap(z[i],z[i-1]);
                    x--;
                }
            }
            z.push_back(4);
            z.push_back(5);
            z.push_back(6);
            z.push_back(2);
            z.push_back(3);
            z.push_back(1);
            for(i=0;i<z.size();i++)
            {
                cout<<z[i]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
