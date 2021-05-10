#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct student
{
    int age;
    int stid;
    double marks;
};

typedef struct student student;

int main()
{
    student s1;
    printf("enter student id");
    scanf("%d",&s1.stid);
    printf("enter student age");
    scanf("%d",&s1.age);
    printf("enter student marks");
    scanf("%lf",&s1.marks);

    if (s1.age<=20)
    {
        printf("enter valid age\n");
        exit(0);
    }
        
    if (s1.marks<0 || s1.marks>100)
    {
        printf("enter valid marks\n");
        exit(0);
    }

    if (s1.marks>65)
    {
		printf(" this student is eligible");
    }
    else
    {
                
        printf("this student is not eligible");

    }
        


}


