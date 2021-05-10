#include<stdio.h>
#include<math.h>

/*
int sumaver()
{

}

int printeven()
{

}
*/
void main()
{
    int a,b,c,grt1,grt2;
    printf("Enter three numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d %d %d",a,b,c);


    if(a>b && a>c)
    {
        grt1=a;

        if(b>c)
        {
            grt2=b;
        }
        else
        {
            grt2=c;
        }
        
    }
    else if(b>c)
    {
        grt1=a;

        if(a>c)
        {
            grt2=a;
        }
        else
        {
            grt2=c;
        }
        
    }
    printf("\n\n %d \n %d \n",grt1,grt2);
}