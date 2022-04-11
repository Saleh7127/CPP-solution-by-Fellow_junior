#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c[26]= {0},d,e,f,i,j,k,l;
    string a;
    cin>>b;
    cin>>a;
    if(b==1)
    {
        cout<<a<<endl;
        return 0;
    }
    l=a.size();
    for(i=0; i<l; i++)
    {
        c[a[i]-'a']++;
    }
    for(j=0; j<26; j++)
    {
        if(c[j]%b)
        {
            cout<<-1<<endl;
            return 0;
        }
        else
            c[j]/=b;
        /*if(c[j]>0)
        {
            for(j=0; j<c[j]/b; j++)
                ans[x++]=i+'a';
        }
        loop()
        {
        print ans;
        }
        */
    }
    for(i=0; i<b; i++)
    {
        for(j=0; j<26; j++)
        {
            for(k=0; k<c[j]; k++)
            {
                printf("%c",j+97);
            }
        }
    }
    return 0;
}
