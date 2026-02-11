#include<stdio.h>
int revarr(int arr[],int n)
{
    int p1=0,p2=n-1;
    while(p1<p2)
    {
        int temp=arr[p1];
        arr[p1]=arr[p2];
        arr[p2]=temp;
        p1++;
        p2--;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    revarr(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
