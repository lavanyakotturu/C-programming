/*#include <stdio.h>
int main()
{
      int marks[10]={1,2,3,4,5,6,7,8,9,10};
      printf("%d\n",marks[0]);
      printf("%d\n",marks[9]);
      return 0;
}*/




#include <stdio.h>

int main()
{
      int marks[10] = {1,2,3,4,5,6,7,8,9,10};
      int i;
      for(i=0;i<10;i++)
      {
      printf("%d\n",marks[i]);
      }
      return 0;
}