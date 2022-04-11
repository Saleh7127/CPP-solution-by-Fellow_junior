#include<bits/stdc++.h>
using namespace std;
int main()
{
    string mash[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    map<string,int>check;

    for(int i=0;i<12;i++)
    {
        check[mash[i]]=i;
    }

    int t,d,d1,y,y1,j,k,l,c;

    char a[100],b[100];
    cin>>t;
    for( l=1;l<=t;l++)
    {
        c=0;
        scanf("%s %d, %d",&a,&d,&y);
        scanf("%s %d, %d",&b,&d1,&y1);
        if(check[a]>1) y++;
        if(check[b]==0 || (check[b]==1 && d1<29)) y1--;
        c=y1/4 -(y-1)/4;
        c-=y1/100 -(y-1)/100;
        c+=y1/400 -(y-1)/400;
        printf("Case %d: %d\n",l,c);
    }
}
