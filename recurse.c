#include<stdio.h>
int fun1 (int,int);
int main()
{
int x;
x=fun1(3,4);
printf("%d",x);
}
int fun1 (int p,int q)
{
 if (q==0)
 return 0;
 else if(q%2==0)
return fun1(2*p,q/2);
else
return fun1 (2*p,q/2)+p;
}




