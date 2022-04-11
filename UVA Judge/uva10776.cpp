#include <bits/stdc++.h>
#define Clear(a) memset(a,0,sizeof(a))
using namespace std;
int n,l;
char ss[2000];
vector<char>ans;
bool taken[1000];
void reset()
{
    Clear(ss);
    Clear(taken);
    ans.clear();
}

void bcktk()
{

    if(ans.size()==n)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[j];
        }
        cout<<endl;
    }
    else
    {
        for(int i=0;i<l;i++)
        {
            if(!ans.empty()&& ans[ans.size()-1]>ss[i])
            {
                continue;
            }
            if(taken[i]==0)
            {
                taken[i]=1;
                ans.push_back(ss[i]);
                bcktk();
                taken[i]=0;
                ans.pop_back();
                while(ss[i]==ss[i+1])
                {
                    i++;
                }
            }
        }
    }
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);cout.tie(0);

   int c,d,e,i,j,k;
   while(cin>>ss>>n)
   {
       l=strlen(ss);
       sort(ss,ss+l);
       bcktk();

       reset();
   }


   return 0;
}
