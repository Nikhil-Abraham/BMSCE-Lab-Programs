#include<stdio.h>
#include<math.h>

void main()
{
    int shape;
    double height, radius;
    double area,volume;

    while(1)
    {

        printf("Enter Shape of which area and volume to be calculated:\nCylinder : 1\nCone : 2\nSPHERE :3\n");
        scanf("%d",&shape);

        printf("-----------------\n");

        switch(shape)
        {
            case 1: printf("Enter Height of Cylinder \n");
            scanf("%lf",&height);
            printf("Enter radius of Cylinder\n");
            scanf("%lf",&radius);
            area=(2*3.14*radius*height)+(2*3.14*radius*radius);
            volume=(3.14*radius*radius*height);
            printf("Area =%lf and Volume = %lf",area,volume);
            break;
            case 2: printf("Enter Height of Cylinder \n");
            scanf("%lf",&height);
            printf("Enter radius of Cylinder\n");
            scanf("%lf",&radius);
            area=(3.14*radius*(radius+pow((pow(height,2)+pow(radius,2)),1/2)));
            volume=(3.14*radius*radius*height/3);
            printf("Area =%lf and Volume = %lf",area,volume);
            break;
            case 3: printf("Enter radius of Cylinder\n");
            scanf("%lf",&radius);
            area=4*3.14*radius*radius;
            volume=(4/3)*3.14*pow(radius,3);
            printf("Area =%lf and Volume = %lf",area,volume);
            break;
            default:printf("Enter valid option\n");
            break;
        }
    }



}