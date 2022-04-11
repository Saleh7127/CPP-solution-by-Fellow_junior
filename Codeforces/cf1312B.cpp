#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[1000],b,c,d,e,f,i,j,k,l,temp;
    cin>>t;
    while(t--)
    {
        cin>>b;
        for(i=0; i<b; i++)
        {
            cin>>a[i];
        }
        sort(a,a+b,greater<int>());
        for(i=0,j=i+1; i<b; i++)
        {
            for(j=i+1; j<b-1; j++)
            {
                if(i-a[i]==j-a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0; i<b; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
