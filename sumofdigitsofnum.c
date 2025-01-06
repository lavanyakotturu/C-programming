#include<stdio.h>
int sod(int a)
{
    int rem,sum=0;
    while(a>0)
    {
    rem=a%10;
    sum+=rem;
    a=a/10;
    return rem;
    }

}
void main()
{
    int n,sod(int);
    printf("enter n value:");
    scanf("%d",&n);
    printf("single dig of given num:%d",sod(n));
}