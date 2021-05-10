#include<stdio.h>
#include<math.h>


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
	
	while(1)
	{
		printf("Enter student ID \n");
		scanf("%d",&s1.stid);  
		printf("Enter student Marks \n");
		scanf("%lf",&s1.marks);  
		printf("Enter student Age \n");
		scanf("%d",&s1.age);  
		
		if(s1.age<=20)
		{
			printf(">>>Enter Valid Age\n");
			continue;
		}
		if(s1.marks<0 || s1.marks>100)
		{
			printf(">>>Enter valid marks\n");
			continue;
		}
		else
		{
			break;
		}

	}
	
	
	if(s1.marks>65)
	{
		printf("Eligible !");
	}
	else
	{
		printf("Not Eligible !!");
	}
	
	
}
