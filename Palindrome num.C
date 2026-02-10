#include <stdio.h>
void Palindrome(int n)
{
  int temp=n;
  int rev=0;
  while(n!=0)
  {
      int l=n%10;
      rev=(rev*10)+l;
      n=n/10;
  }
  if(rev==temp)
  printf("Palindrome");
  else
  printf("Not a Palindrome");
}

int main() {
	int n;
	scanf("%d",&n);
	Palindrome(n);
	
}

