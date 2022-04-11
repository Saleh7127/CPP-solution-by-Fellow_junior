#include <bits/stdc++.h>
using namespace std;
#define ll long long

map<string,ll>point,played,goalscored,goalconced,goaldif,draw,win,lose;

bool cmp(string a, string b)
{
     if(point[a]==point[b])
     {
          if(win[a]==win[b])
          {
               if(goaldif[a]==goaldif[b])
               {
                    if(goalscored[a]==goalscored[b])
                    {
                         if(played[a]==played[b])
                         {
                              transform(a.begin(),a.end(),a.begin(),::toupper);
                              transform(b.begin(),b.end(),b.begin(),::toupper);
                              return a<b;
                         }
                         return played[a]<played[b];
                    }
                    return goalscored[a]>goalscored[b];
               }
               return goaldif[a]>goaldif[b];
          }
          return win[a]>win[b];
     }
     return point[a]>point[b];
}



int main()
{

   ll t;

   cin>>t;

   getchar();

   while(t--)
   {
        string name;
        getline(cin,name);

        ll n,m,i,j,k,l;;

        cin>>n;

        getchar();

        string tname[n+5];

        for(i=0;i<n;i++)
        {
             getline(cin,tname[i]);
        }

        cin>>m;

        getchar();

        while(m--)
        {
             string result,t1,t2,g1,g2;

             getline(cin,result);

             for(i=0;i<result.size();i++)
             {
                  if(result[i]=='#') break;
                  t1+=result[i];
             }

             for(j=i+1;j<result.size();j++)
             {
                  if(result[j]=='@') break;
                  g1+=result[j];
             }

             for(i=j+1;i<result.size();i++)
             {
                  if(result[i]=='#') break;
                  g2+=result[i];
             }

             for(j=i+1;j<result.size();j++)
             {
                  t2+=result[j];
             }

             ll goal1=stoi(g1);
             ll goal2=stoi(g2);

             goalscored[t1]+=goal1;
             goalconced[t1]+=goal2;
             goaldif[t1]+=(goal1-goal2);
             played[t1]++;


             goalscored[t2]+=goal2;
             goalconced[t2]+=goal1;
             goaldif[t2]+=(goal2-goal1);
             played[t2]++;

             if(goal1>goal2)
             {
                  point[t1]+=3;
                  win[t1]++;
                  lose[t2]++;
             }
             else if(goal1<goal2)
             {
                  point[t2]+=3;
                  win[t2]++;
                  lose[t1]++;
             }
             else
             {
                  point[t1]++;
                  draw[t1]++;

                  point[t2]++;
                  draw[t2]++;
             }
        }

        sort(tname,tname+n,cmp);

        cout<<name<<endl;

        for(i=0;i<n;i++)
        {
             cout<<i+1<<") "<<tname[i]<<" "<<point[tname[i]]<<"p, "<<played[tname[i]]<<"g (";

             cout<<win[tname[i]]<<"-"<<draw[tname[i]]<<"-"<<lose[tname[i]]<<"), ";

             cout<<goaldif[tname[i]]<<"gd ("<<goalscored[tname[i]]<<"-"<<goalconced[tname[i]]<<")"<<endl;
        }

        if(t) cout<<endl;

        point.clear();
        played.clear();
        goalscored.clear();
        goalconced.clear();
        goaldif.clear();
        draw.clear();
        win.clear();
        lose.clear();
   }

   return 0;
}
