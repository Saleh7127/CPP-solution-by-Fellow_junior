#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d=0,e=0,f=0,g,i,j,k,l;
    char a,b,c;
    for(i=0; i<3; i++)
    {
        cin>>a>>b>>c;
        if(b=='>')
        {
            if(a=='A')
                d++;
            if(a=='B')
                e++;
            if(a=='C')
                f++;
        }
        else if(b=='<')
        {
            if(c=='A')
                d++;
            if(c=='B')
                e++;
            if(c=='C')
                f++;
        }
    }
    if (d==2 && e==1 && f==0)
        printf("CBA\n");
    else if (d==2 && f==1 && e==0)
        printf("BCA\n");
    else if (f==2 && d==1 && e==0)
        printf("BAC\n");
    else if (f==2 && e==1 && d==0)
        printf("ABC\n");
    else if (e==2 && d==1 && f==0)
        printf("CAB\n");
    else if (e==2 && f==1 && d==0)
        printf("ACB\n");
    else
        printf("Impossible\n");

}
