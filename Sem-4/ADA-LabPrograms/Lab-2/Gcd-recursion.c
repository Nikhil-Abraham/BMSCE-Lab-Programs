#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b)
{
if (b == 0)
return a;
int temp=a%b;
return gcd(b, temp);
}

void main()
{
	int a,b;
	printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
	printf("Gcd is %d\n",gcd(a,b));

}
