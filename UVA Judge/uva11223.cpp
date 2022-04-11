#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    char a[50000];
    ll y,t,i,j,k,l,n,m;
    cin>>t;
    getchar();
    for(y=1; y<=t; y++)
    {
        scanf("%[^\n]%*c",&a);
        printf("Message #%lld\n",y);
        char b[1000];
        j=0;
        for(i=0; i<=strlen(a); i++)
        {
            if(a[i]!=' ' && a[i]!='\0')
            {
                b[j]=a[i];
                j++;
            }
            else
            {
                b[j]='\0';
                if(strcmp(b,".-")==0)
                    printf("A");
                else if(strcmp(b,"-...")==0)
                    printf("B");
                else if(strcmp(b,"-.-.")==0)
                    printf("C");
                else if(strcmp(b,"-..")==0)
                    printf("D");
                else if(strcmp(b,".")==0)
                    printf("E");
                else if(strcmp(b,"..-.")==0)
                    printf("F");
                else if(strcmp(b,"--.")==0)
                    printf("G");
                else if(strcmp(b,"....")==0)
                    printf("H");
                else if(strcmp(b,"..")==0)
                    printf("I");
                else if(strcmp(b,".---")==0)
                    printf("J");
                else if(strcmp(b,"-.-")==0)
                    printf("K");
                else if(strcmp(b,".-..")==0)
                    printf("L");
                else if(strcmp(b,"--")==0)
                    printf("M");
                else if(strcmp(b,"-.")==0)
                    printf("N");
                else if(strcmp(b,"---")==0)
                    printf("O");
                else if(strcmp(b,".--.")==0)
                    printf("P");
                else if(strcmp(b,"--.-")==0)
                    printf("Q");
                else if(strcmp(b,".-.")==0)
                    printf("R");
                else if(strcmp(b,"...")==0)
                    printf("S");
                else if(strcmp(b,"-")==0)
                    printf("T");
                else if(strcmp(b,"..-")==0)
                    printf("U");
                else if(strcmp(b,"...-")==0)
                    printf("V");
                else if(strcmp(b,".--")==0)
                    printf("W");
                else if(strcmp(b,"-..-")==0)
                    printf("X");
                else if(strcmp(b,"-.--")==0)
                    printf("Y");
                else if(strcmp(b,"--..")==0)
                    printf("Z");
                else if(strcmp(b,"-----")==0)
                    printf("0");
                else if(strcmp(b,".----")==0)
                    printf("1");
                else if(strcmp(b,"..---")==0)
                    printf("2");
                else if(strcmp(b,"...--")==0)
                    printf("3");
                else if(strcmp(b,"....-")==0)
                    printf("4");
                else if(strcmp(b,".....")==0)
                    printf("5");
                else if(strcmp(b,"-....")==0)
                    printf("6");
                else if(strcmp(b,"--...")==0)
                    printf("7");
                else if(strcmp(b,"---..")==0)
                    printf("8");
                else if(strcmp(b,"----.")==0)
                    printf("9");
                else if(strcmp(b,".-.-.-")==0)
                    printf(".");
                else if(strcmp(b,"--..--")==0)
                    printf(",");
                else if(strcmp(b,"..--..")==0)
                    printf("?");
                else if(strcmp(b,".----.")==0)
                    printf("'");
                else if(strcmp(b,"-.-.--")==0)
                    printf("!");
                else if(strcmp(b,"-..-.")==0)
                    printf("/");
                else if(strcmp(b,"-.--.")==0)
                    printf("(");
                else if(strcmp(b,"-.--.-")==0)
                    printf(")");
                else if(strcmp(b,".-...")==0)
                    printf("&");
                else if(strcmp(b,"---...")==0)
                    printf(":");
                else if(strcmp(b,"-.-.-.")==0)
                    printf(";");
                else if(strcmp(b,"-...-")==0)
                    printf("=");
                else if(strcmp(b,".-.-.")==0)
                    printf("+");
                else if(strcmp(b,"-....-")==0)
                    printf("-");
                else if(strcmp(b,"..--.-")==0)
                    printf("_");
                else if(strcmp(b,".-..-.")==0)
                    printf("\"");
                else if(strcmp(b,".--.-.")==0)
                    printf("@");
                j=0;
            }
            if(a[i+1]==' ' && a[i]==' ')
            {
                printf(" ");
            }
        }
        if(y!=t) printf("\n\n");
        else printf("\n");
    }
    return 0;
}
