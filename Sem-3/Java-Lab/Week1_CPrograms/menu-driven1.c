#include<stdio.h>
#include<stdio.h>

int main(){
    char operator;
    double num1,num2,result;

    while(1){
        printf("Enter first number");
        scanf("%lf",&num1);

        printf("Select Operator \n + addition\n - Subtraction\n * Multiplication\n / Remaider operation\n > Greater than\n < less than\n == equal to\n != not equal to");
        scanf("%c",&operator);

        printf("Enter second number");
        scanf("%lf",&num2);

        switch(operator)
        {
            case '+': result = num1+num2;
            break;
            
        }
    }
}
