#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d,e,f,i,j,k,l,m,n;
    cin>>t;
    while(t--)
    {
        m=0;
        n=0;
        e=0;
        cin>>d;
        char a[100000],b[100000],c[100000];
        cin>>a;
        for(j=0; j<d; j++)
        {
            if(e==0)
            {
                if(a[j]=='1')
                {
                    b[m]='1';
                    m++;
                    c[n]='0';
                    n++;
                    e=1;
                }
                if(a[j]=='0')
                {
                    b[m]='0';
                    m++;
                    c[n]='0';
                    n++;
                }
                if(a[j]=='2')
                {
                    b[m]='1';
                    m++;
                    c[n]='1';
                    n++;
                }
            }
            else
            {
                b[m]='0';
                m++;
                c[n]=a[j];
                n++;
            }
        }
        b[m]='\0';
        c[n]='\0';
        cout<<b<<endl;
        cout<<c<<endl;
    }
    return 0;
}
