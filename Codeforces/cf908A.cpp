#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b=0,c,d,e,i,j,k;
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='o' || a[i]=='i' ||a[i]=='u')
        {
            b++;
        }
        else if(a[i]=='1' || a[i]=='3' || a[i]=='5' || a[i]=='7' ||a[i]=='9')
        {
            b++;
        }
    }
    cout<<b<<endl;

    return 0;
}
