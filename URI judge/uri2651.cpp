#include<string>
#include<iostream>
using namespace std;
int main()
{
    int i,j=0,k;
    string a;
    cin>>a;
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
    }
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]=='z' && a[i+1]=='e' && a[i+2]=='l' && a[i+3]=='d' && a[i+4]=='a')
        {
            j=1;
            break;
        }
    }
    if(j==1)
        cout<<"Link Bolado"<<endl;
    else
        cout<<"Link Tranquilo"<<endl;

    return 0;
}

