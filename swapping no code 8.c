#include<stdio.h>

int main()
{
int a, b, temp;
printf("Enter two numbers (a and b):");
scanf("%d %d",&a, &b);

// swapping process
temp = a;
a = b;
b = temp;

printf("After Swapping: a = %d, b = %d\n",a, b);

return 0;
}
