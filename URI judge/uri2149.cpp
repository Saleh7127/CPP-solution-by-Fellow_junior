#include<iostream>
using namespace std;
int main()
{
    long long int a[100000],b,c,d,e,i,j,k,l;
    while(cin>>b)
    {
        a[0]=0;
        a[1]=1;
        for(i=2; i<b; i++)
        {
            if(i%2==0)
            {
                a[i]=a[i-1]+a[i-2];
            }
            else
            {
                a[i]=a[i-1]*a[i-2];
            }
        }
        cout<<a[b-1]<<endl;
    }
    return 0;
}
