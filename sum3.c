#include <stdio.h>
int main()
{
   int a, b, c, d;
 
   printf("Enter three numbers to add\n");
   scanf("%d%d%d",&a,&b,&c);
 
   d = a + b + c;
 
   printf("Sum of entered numbers = %d\n",d);
 
   return 0;
}
