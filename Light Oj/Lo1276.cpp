#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
ll limit=1e12;
vector<ll>lucky;
map<ll,bool>visit;
void cal()
{
    lucky.push_back(4);
    lucky.push_back(7);

    ll i=0,j;

    visit[4]=1;
    visit[7]=1;

    while(lucky[i]<=limit)
    {
        lucky.push_back((lucky[i]*10+4));
        visit[(lucky[i]*10+4)]=1;
        lucky.push_back((lucky[i]*10+7));
        visit[(lucky[i]*10+7)]=1;
        i++;
    }

    sort(lucky.begin(),lucky.end());

    for(i=0;i<lucky.size();i++)
    {
        for(j=0;j<lucky.size();j++)
        {
            if(lucky[i]*lucky[j]>limit)
            {
                break;
            }
            if(visit[(lucky[i]*lucky[j])]!=1)
            {
                visit[(lucky[i]*lucky[j])]=1;
                lucky.push_back((lucky[i]*lucky[j]));
            }
        }
    }

    sort(lucky.begin(),lucky.end());
}



int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   cal();

   ll a,c,i,j,k;

   test
   {
       cin>>a>>c;
       cout<<"Case "<<cs<<": ";
       k=upper_bound(lucky.begin(),lucky.end(),c)-lower_bound(lucky.begin(),lucky.end(),a);
       cout<<k<<endl;

   }
   return 0;
}
