#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int c,d,i,j=0,k,l;
    cin>>c;
    while(c--)
    {
        j=0;
        cin>>d;
        cin>>a;
        for(i=0;i<d;i++)
        {
            if(a[i]%2==1)
            {
               j++;
            }
        }
        if(j<2) cout<<-1<<endl;
        else
        {
            for(i=0,j=0;j<2;i++)
            {
                if(a[i]%2==1)
                {
                    cout<<a[i];
                    j++;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
