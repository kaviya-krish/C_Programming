#include <stdio.h>
void armstrong(int n)
{
    int temp=n;
    int digit=0;
    while(temp!=0)
    {
       digit++;
       temp=temp/10;
    }
    temp=n;
    int sum=0;
    while(temp!=0)
    {
        int l=temp%10;
        sum+=pow(l,digit);
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("Armstrong");
    }
    else 
    {
        printf("Not a Armstrong");
    }
}

int main() {
    int n;
    scanf("%d",&n);
    armstrong(n);

}

