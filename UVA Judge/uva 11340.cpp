#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ll t,i,j,k,l;
    cin>>t;
    while(t--)
    {
        ll b,d,e,f;
        double ans=0,value;
        char c;
        map<char, double>store;
        map<char, double>::iterator khoj;
        cin>>b;
        for(i=0;i<b;i++)
        {
            cin>>c>>value;
            store[c]=value;
        }
        cin>>d;
        cin.ignore();
        while(d--)
        {
            string a;
            getline(cin,a);
            l=a.size();
            for(j=0;j<l;j++)
            {
                khoj=store.find(a[j]);
                if(khoj != store.end())
                {
                    ans+= khoj->second;
                }
            }
        }
        ans=ans/100;
        printf("%0.2lf$\n",ans);
        store.clear();
    }
    return 0;
}
