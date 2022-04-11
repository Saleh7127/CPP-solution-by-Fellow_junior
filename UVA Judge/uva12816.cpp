#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)

double distan(double x,double y,double x1,double y1)
{
     return sqrt((x-x1)*(x-x1) + (y-y1)*(y-y1));
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   ll i,j,k,n;


   while(cin>>n)
   {
        double x[n+1],y[n+1];

        for(i=0;i<n;i++)
        {
             cin>>x[i]>>y[i];
        }


        double a,b,c,d,e;

        ll ans=0;

        for(i=0;i<n-2;i++)
        {
             for(j=i+1;j<n-1;j++)
             {
                  for(k=j+1;k<n;k++)
                  {
                       a=distan(x[i],y[i],x[j],y[j]);
                       b=distan(x[i],y[i],x[k],y[k]);
                       c=distan(x[j],y[j],x[k],y[k]);

                       double ck[3];
                       ck[0]=a;
                       ck[1]=b;
                       ck[2]=c;

                       sort(ck,ck+3);

                       if(ck[0]+ck[1]>ck[2])
                       {
                            if(ck[0]==ck[1] && ck[0]!=ck[2]) ans++;
                            else if(ck[2]==ck[1] && ck[0]!=ck[2]) ans++;
                       }
                  }
             }
        }

        cout<<ans<<endl;
   }


   return 0;
}

