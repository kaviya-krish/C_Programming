#include<stdio.h>
void vowcon(char str[])
{
    int v=0,c=0,a=0;
    for(int i=0;i<strlen(str);i++)
    {
    if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
        {
           v++;
        }
        else
        {
            c++;
        }
    }
    else
    {
        a++;

    }
    }
    printf("%d %d %d",v,c,a);
}

int main()
{
    char str[1000];
    scanf("%[^\n]",str);
    vowcon(str);
}
