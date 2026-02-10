#include <stdio.h>
void palindrome(char s[])
{
    int n=strlen(s);
    int p1=0;
    int p2=n-1;
    while(p2>p1)
    {
        if(tolower(s[p2])!=tolower(s[p1]))
        {
        printf("Not a palindrome");
        return 0;
        }
        p1++;
        p2--;
     
        printf("Palindrome");
        return 0;
        
    }
}
int main(){
    char s[50];
    scanf("%[^\n]",s);
    palindrome(s);
}
