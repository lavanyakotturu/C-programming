#include<stdio.h>
void main()
{
    int i,j,n=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
}



#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
          
        }
        
        printf("\n");
    }
}




#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)      //rows
    {
        for(j=1;j<=4-i;j++)   //space

        {
           printf(" ");
        }
          for(j=1;j<=i;j++)  //coloumns
          {
            printf("*");
          }
        printf("\n");
    }
}



#include<stdio.h>
void main()
{
    int i,j,sp;
    for(i=1;i<=4;i++)
    {
        for(sp=1;sp<=4-i;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=4-1;i>=1;i--)
    {
        for(sp=1;sp<=4-i;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
         printf("\n");
    }
}





#include<stdio.h>
void main()
{
    int i,j,sp;
    for(i=1;i<=4;i++)
    {
        for(sp=1;sp<=4-i;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(i=4-1;i>=1;i--)
    {
        for(sp=1;sp<=4-i;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
         printf("\n");
    }
}



#include<stdio.h>
void main()
{
    int i,j,sp;
    for(i=5;i>=1;i--)
    {
        for(sp=1;sp<=5-i;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
        printf("*");
        }
        printf("\n");
    }
}



#include<stdio.h>
void main()
{
    int i,j,sp;
    for(i=1;i<=5;i++)
    {
        for(sp=1;sp=5-i;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


#include<stdio.h>
void main()
{
    int i,j,sp;
    for(i=1;i<=5;i++)
    {
        for(sp=1;sp<=5-i;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
        printf("*");
        }
        printf("\n");
    }
}


#include<stdio.h>
void main()
{
    int i,j,sp;
    for(i=5;i>=1;i--)
    {
        for(sp=1;sp<=5-i;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
        printf("*");
        }
        printf("\n");
    }
}