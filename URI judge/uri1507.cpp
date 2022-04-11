#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i,j,s=0,l1,l2;
    char b[200000],c[100000];
    cin>>n;
    while(n--)
    {
        cin>>b;
        l1=strlen(b);
        cin>>a;
        while(a--)
        {
            cin>>c;
            l2=strlen(c);
            for(i=0,j=0;i<l1;i++)
            {
                if(b[i]==c[j])
                {
                    s++;
                    j++;
                }
            }
            if(s==l2)
                printf("Yes\n");
            else
                printf("No\n");
            s=0;
        }
    }
    return 0;
}
