#include <stdio.h>
void main()
{
   int a,singledig(int);
   printf("enter a num:");
   scanf("%d",&a);
   printf("sum of single digit:%d",singledig(a));

}
int singledig(int x)
{
    int rem;
    rem=x%9;
    if(rem==0)
    return(9);
    else
    return(rem);
}