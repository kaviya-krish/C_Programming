#include<stdio.h>
void prime(int n)
{
    if(n<=1)
    {
        printf("Not a Prime number");
        return;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
        printf("not a Prime number");
        return;
        }
    }
    printf("Prime number");
    
   
    
}
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
}
