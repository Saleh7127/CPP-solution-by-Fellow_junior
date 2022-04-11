#include<iostream>
using namespace std;
int main()
{
    unsigned long long int a;
    while(cin>>a)
    {
        if(a==0)
        {
            cout<<"0"<<endl;
            break;
        }
        string f;
        int r;
        while(a!=0)
        {
            r=a%32;
            a/=32;
            if(r<10)
            {
               f+=r+'0';
            }
            else
            {
                f+=(r-10)+'A';
            }
        }

        for(int i=f.size()-1;i>=0;i--)
        {
            cout<<f[i];
        }
        cout<<endl;
    }
    return 0;
}
