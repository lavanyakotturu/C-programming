#include<stdio.h>
#include<math.h>
int armstrong(int a)
{
    int rem,temp,sum=0;
    temp=a;
    while(a>0)
    {
    rem=a%10;
    sum=sum+rem*rem*rem;
    a=a/10;
    }
    return (temp==sum);
}
void main()
{
    int n,armstrong(int);
    printf("enter n value");
    scanf("%d",&n);
    if(armstrong(n))
    printf("arm");
    else
    printf("not");
}
