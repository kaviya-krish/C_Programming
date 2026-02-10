#include<stdio.h>
#include<string.h>
int base(char c)
{
    if(c=='B')
    return 2;
    else if(c=='O')
    return 8;
    else if(c=='D')
    return 10;
    else if(c=='H')
    return 16;
    else 
    return 0;
}
int valueOf(char c)
{
    if(c>='0' && c<='9')
    return c-48;
    else if(c>='a' && c<='f')
    return c-87;
    else if(c>='A' && c<='F')
    return c-55;
    else 
    return -1;
}
int toDecimal(char arr[],int base)
{
    int d=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        d=d*base+valueOf(arr[i]);
    }
    return d;
}
char charOf(int v)
{
    if(v<10)
    return v+48;
    else
    return v+55;
}
void convert(int dec,int base)
{
    char ans[1000];
    int i=0;
    while(dec>0)
    {
        int rem=dec%base;
        ans[i]=charOf(rem);
        dec=dec/base;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%c",ans[j]);
    }
}
int main()
{
    char from,to;
    char nums[1000];
    scanf(" %c",&from);
    scanf(" %c",&to);
    scanf("%s",nums);
    int fromBase=base(from);
    int toBase=base(to);
    int d=toDecimal(nums,fromBase);
    convert(d,toBase);
    return 0;
    
}
