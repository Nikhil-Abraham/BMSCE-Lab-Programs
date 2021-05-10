#include<stdio.h>
#include<math.h>

void main()
{
    int n;
    int z=1;
    while(1)
    {
        printf("Enter a number for the output \n");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int y=1;y<=i;y++)
            {
                printf("%d  ",z);
                z++;
            }
            printf("\n");
        }
        z=1;
    }
}