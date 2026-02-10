#include <stdio.h>
void reverse(int n)
{
  int temp=n;
  int rev=0;
  while(n!=0)
  {
      int l=n%10;
      rev=(rev*10)+l;
      n=n/10;
  }
  printf("%d",rev);
}

int main() {
	int n;
	scanf("%d",&n);
	reverse(n);
	
}

