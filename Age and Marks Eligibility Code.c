#include<stdio.h>

 int main()
 {
 int age,marks;

  printf("Enter age and marks:");
  scanf("%d %d",&age,marks);

  if(age>=18)
  {
  if (marks>=40)
    printf("Eligible");
    }
else
   {
   printf("Age is below 18");
   }
   return 0;
   }
