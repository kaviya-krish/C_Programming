#include <stdio.h>
void fibonacci(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    
    int a=0,b=1;
    printf("Fibonacci series is:");
    for(int i=2;i<=n;i++)
    {
        int c=a+b;
        a=b;
        b=c;
        printf("%d ",b);
    }
    printf("\nTotal:%d",b);
}

int main() {
	int n;
	scanf("%d",&n);
	fibonacci(n);

}

