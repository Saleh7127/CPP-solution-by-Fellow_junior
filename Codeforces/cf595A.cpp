#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e=0,f,i,j,k,l;
    cin>>a>>b;
    while(a--)
    {
        for(i=0;i<b;i++)
        {
            cin>>c>>d;
            if(c==1 || d==1)
            {
                e++;
            }
        }
    }
    cout<<e<<endl;
    return 0;
}
