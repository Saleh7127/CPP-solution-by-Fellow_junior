#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,i,j,k,l;
    cin>>a;
    b=(a*a + 1)/2;
    cout<<b<<endl;
    for(i=0;i<a;i++)
    {
          c=0;
        for(j=0;j<a;j++)
        {
            c=i+j;
            if(c%2==0)
            {
                cout<<"C";
            }
            else cout<<".";
        }
        cout<<"\n";
    }
    return 0;
}
