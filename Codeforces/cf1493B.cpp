#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int t; cin>>t; for(int cs=1;cs<=t;cs++)
int h,m;
bool ch(int x)
{

    while(x>0)
    {
        if(x%10==3 || x%10==4 || x%10==6 || x%10==7 || x%10==9) return 0;
        x/=10;
    }



    return 1;
}

bool chh(int a,int b)
{

    int c,d,u,e,f;


    c=a;
    d=b;

    if(c%10==2) u=5;
    else if(c%10==5) u=2;
    else u=c%10;

    e=u*10;

    c/=10;

    if((c%10)==2) u=5;
    else if(c%10==5) u=2;
    else u=c%10;

    e+=u;

    if((d%10)==2) u=5;
    else if(d%10==5) u=2;
    else u=d%10;

    f=u*10;

    d/=10;

    if((d%10)==2) u=5;
    else if(d%10==5) u=2;
    else u=d%10;

    f+=u;

    if(e<m && f<h) return 1;
    else return 0;

}

int main()
{


    test
    {

        int a,b,c,d,e,f,u;

        string x;


        scanf("%d %d",&h,&m);

        scanf("%d:%d",&a,&b);


        while(1)
        {
            if(ch(a) && ch(b) && chh(a,b))
            {

                break;

            }
            else
            {
                b++;
                if(b==m)
                {
                    b=0;
                    a++;
                    if(a==h)
                    {
                        a=0;
                    }
                }
            }
        }
        printf("%02d:%02d\n",a,b);

    }


    return 0;
}
