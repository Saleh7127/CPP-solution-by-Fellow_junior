#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,d,e,f=0,i,j,k,l;
    map<string,int>a;
    string b;
    cin>>c;
    for(i=0; i<c; i++)
    {
        cin>>b;
        a[b]++;
    }
    map<string,int>::iterator x;
    for(x=a.begin(); x!=a.end(); x++)
    {
        if(x->second!=0)
            f++;
    }
    printf("%d\n",f);
    return 0;
}
