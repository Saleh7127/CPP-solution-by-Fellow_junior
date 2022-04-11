#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,n,w,m,a,b,c,d,e,f,i,j,k,l,bt;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i==0 && j==0)
                    printf("W");
                else
                    printf("B");
            }
            printf("\n");
        }
    }
}
