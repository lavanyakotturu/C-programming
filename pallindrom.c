#include<stdio.h>
void main()
{
    int num,pallindrom(int);
    printf("enter a num:");
    scanf("%d",&num);
    if(pallindrom(num)==0)
    printf("pallindrom");
    else
    printf("not pallindrom");
}
int pallindrom( int n)
{
    int rem,rev=0,temp;
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    if(rev=temp)
    
    return 0;
    
    else
    return 1;
}