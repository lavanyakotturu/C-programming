#include<stdio.h>
#include<math.h>
int prime(int n)
{
 int i,sum=0;
 for(i=1;i<=n/2;i++)
 {
 if(n%i==0)
 sum=sum+i;
 }
 return(sum==n);
 
}
void main()
{
    int n,perfect(int);
    printf("enter n value:");
    scanf("%d",&n);
    if(perfect(n))
    printf("perfect number");
    else
    printf("not");
}