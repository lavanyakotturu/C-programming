#include<stdio.h>
#define true 1
#define false 0
int prime(int n)
{
 int i;
 for(i=2;i<=n/2;i++)
 {
 if(n%i==0)
 return(false);
 }
 return(true);
 
}
void main()
{
    int n,prime(int);
    printf("enter n value:");
    scanf("%d",&n);
    if(prime(n))
    printf("prime number");
    else
    printf("not");

}