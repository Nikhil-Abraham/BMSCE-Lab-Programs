#include <stdio.h>
#include <stdlib.h>

int iterative_gcd(int a, int b)       //iterative
{
int p, q;
while (b > 0)
{
p = a / b;
q = a - p * b;
a = b;
b = q;
}
return a;
}
int recursive_gcd(int c, int d)       //recursive
{
if (d == 0)
return c;
int m = c / d;
int n = c - m * d;
return recursive_gcd(d, n);
}
int main()
{
int a,b,choice;
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
printf("1)Iterative gcd\n2)Recursive gcd\n");

scanf("%d",&choice);
switch(choice)
{
    case 1:printf("Gcd is :%d\n",iterative_gcd(a,b));
            break;
    case 2:printf("Gcd is :%d\n",recursive_gcd(a,b));
            break;
    default:exit(0);
}
return 0;
}
