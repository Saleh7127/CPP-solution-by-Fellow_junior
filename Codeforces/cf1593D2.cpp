/***
 created: 2021-10-16-14.09.21
***/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
#define get_lost_idiot return 0

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);


   test
   {
        int n,m,i,j,k,l=0;

        cin>>n;

        int a[n+4];

        map<int,int>x;

        for(i=0;i<n;i++)
        {
             cin>>a[i];
             x[a[i]]++;

             if(x[a[i]]>=(n/2)) l=1;
        }

        if(l==1) l=-1;
        else
        {
             l=INT_MIN;

             for(i=0;i<n;i++)
             {
                  vector<int>dif;

                  for(j=0;j<n;j++)
                  {
                       if(j!=i)
                       {
                            dif.push_back(a[j]-a[i]);
                       }
                  }

                  set<int>div;

                  for(j=0;j<n-1;j++)
                  {
                       for(k=1;k*k<=dif[j];k++)
                       {
                            if(dif[j]%k==0)
                            {
                                 div.insert(k);
                                 div.insert(dif[j]/k);
                            }
                       }
                  }

                  for(auto d:div)
                  {
                       k=1;
                       for(j=0;j<n-1;j++)
                       {
                            if(dif[j]%d==0) k++;
                       }

                       if(k>=(n/2)) l=max(l,d);
                  }
             }
        }

        cout<<l<<endl;
   }

   get_lost_idiot;
}
