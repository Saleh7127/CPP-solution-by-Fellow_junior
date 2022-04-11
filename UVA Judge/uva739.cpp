#include <bits/stdc++.h>
using namespace std;
int main()
{
   int i,j,k,l;
   char x[100];
   for(i=1;i<10;i++)
   {
       cout<<" ";
   }
   cout<<"NAME";
   for(i=i+4;i<35;i++)
   {
       cout<<" ";
   }
   cout<<"SOUNDEX CODE\n";
   while(scanf("%s",x)!=EOF)
   {
       l=strlen(x);
       for(i=1;i<10;i++)
       {
           cout<<" ";
       }
       printf("%s",x);
       for(i=i+l;i<35;i++)
       {
           cout<<" ";
       }
       cout<<x[0];
       int a[50];
       for(j=0;j<25;j++)
       {
           a[j]=0;
       }
       k=0;
       for(j=1;j<l;j++)
       {
          if(x[j]=='A' || x[j]=='E' || x[j]=='I' || x[j]=='O' || x[j]=='U' || x[j]=='Y' || x[j]=='W' || x[j]=='H')
          {
              continue;
          }
          if(x[j]=='B' || x[j]=='P' || x[j]=='F' || x[j]=='V')
          {
              if(x[j-1]=='B' || x[j-1]=='P' || x[j-1]=='F' || x[j-1]=='V')
              {
                  continue;
              }
              a[k]=1;
              k++;
              continue;
          }
          if(x[j]=='C' || x[j]=='S' || x[j]=='K' || x[j]=='G' || x[j]=='J' || x[j]=='Q' || x[j]=='X' || x[j]=='Z')
          {
              if(x[j-1]=='C' || x[j-1]=='S' || x[j-1]=='K' || x[j-1]=='G' || x[j-1]=='J' || x[j-1]=='Q' || x[j-1]=='X' || x[j-1]=='Z')
              {
                  continue;
              }
              a[k]=2;
              k++;
              continue;
          }
          if(x[j]=='D' || x[j]=='T')
          {
              if(x[j-1]=='D' || x[j-1]=='T')
              {
                  continue;
              }
              a[k]=3;
              k++;
              continue;
          }
          if(x[j]=='L')
          {
              if(x[j-1]=='L')
              {
                  continue;
              }
              a[k]=4;
              k++;
              continue;
          }
          if(x[j]=='M' || x[j]=='N')
          {
              if(x[j-1]=='M' || x[j-1]=='N')
              {
                  continue;
              }
              a[k]=5;
              k++;
              continue;
          }
          if(x[j]=='R')
          {
              if(x[j-1]=='R')
              {
                  continue;
              }
              a[k]=6;
              k++;
              continue;
          }
       }
       cout<<a[0]<<a[1]<<a[2]<<endl;
   }
   for(i=1;i<20;i++)
   {
       cout<<" ";
   }
   cout<<"END OF OUTPUT\n";
   return 0;
}
