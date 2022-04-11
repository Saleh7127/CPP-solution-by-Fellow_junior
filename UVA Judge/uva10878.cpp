#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int tt; cin>>tt; for(int cs=1;cs<=tt;cs++)
ll v[]={0,0,64,32,16,8,0,4,2,1,0};
int main()
{

   char a[2000];

   ll i,j,k,l;

   gets(a);

   while(gets(a) && a[0]!='_')
   {

        k=strlen(a);

        l=0;

        for(i=2;i<k;i++)
        {
             if(a[i] == 'o')
             {
                  l+=v[i];
             }
        }

        printf("%c",l);

   }

   return 0;
}
