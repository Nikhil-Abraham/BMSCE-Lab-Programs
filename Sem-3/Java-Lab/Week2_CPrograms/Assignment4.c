#include <stdio.h>
#include <math.h>

void main()
{
    int cie[5];
    int see[5];

    printf("Enter CIE marks of 5 Subjects \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &cie[i]);
        if (cie[i] > 50)
        {
            printf("Enter valid Marks \n");
            break;
        }
    }

    printf("Enter SEE marks of 5 Subjects \n");
    for (int y = 0; y < 5; y++)
    {
        scanf("%d", &see[y]);
        if (see[y] > 100)
        {
            printf("Enter valid Marks \n");
            break;
        }
    }

    float sum = 0;
    for (int z = 0; z < 5; z++)
    {
        sum = sum + cie[z] + (see[z] / 2);
    }
    sum = sum / 50;

    if (sum > 9)
    {
        printf("Grade S\n");
    }
    else if (sum > 8)
    {
        printf("Grade B \n");
    }
    else if (sum > 7)
    {
        printf("Grade C \n");
    }
    else if (sum > 6)
    {
        printf("Grade D \n");
    }
    else if (sum > 4)
    {
        printf("Grade E \n");
    }
    else
    {
        printf("Grade F \n");
    }
}