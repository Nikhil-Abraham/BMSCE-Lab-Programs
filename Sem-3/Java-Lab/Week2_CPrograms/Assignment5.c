#include<stdio.h>
#include<math.h>

void main()
{
    int n1,n2,flag;
    printf("Enter first number\n");
    scanf("%d",&n1);
    printf("Enter second numkber \n");
    scanf("%d",&n2);
    printf("----------\n");

    for(;n1<n2;n1++)
    {
        flag =0;
        for(int i=2;i<n1/2;i++)
        {
            if(n1%i==0)
            {
                flag =1;
                break;
            }
        }
        if(flag ==0)
        {
            printf("%d\n",n1);
        }
    }


}