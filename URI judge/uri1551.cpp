#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,c[100000],d,e,f,i,j,k,l;
    cin>>b;
    while(b--)
    {
        d=0;
        cin>>a;
        for(i=0; i<a.size(); i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                e=a[i];
                if(c[e-97]==0)
                {
                    c[e-97]++;
                }
            }
        }
        for(j=0; j<26; j++)
        {
            if(c[j]>0)
                d++;
        }
        if(d==26)
            printf("frase completa\n");
        else if(d>=13)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");
    }
}
