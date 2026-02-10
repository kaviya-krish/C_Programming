#include<stdio.h>
void digits(int n)
{
    int count=0;
    if(n==0)
    {
        count=1;
    }
    else
    {
        while(n!=0)
        {
        count++;
        n=n/10;
        }
    }
    printf("%d",count);
}
int main()
{
    int n;
    scanf("%d",&n);
    digits(n);
}
