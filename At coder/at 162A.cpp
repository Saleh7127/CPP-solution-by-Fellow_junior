#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,b=0;
    cin>>a;
    for(i=0; i<a.size(); i++)
    {
        if(a[i]=='7')
            b=1;
    }
    if(b==1)
    {
        printf("Yes\n");
    }
    else
        printf("No\n");
    return 0;
}
