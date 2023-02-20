#include<stdio.h>

void add();
void sub();
void mul();
void div();
void pow();
void prime();
void OddorEven();

int main()
{
    int num1, num2, result, choice;



    while(choice != 8 ){
        printf("Please Choose Operation:\n");
        printf("Enter 1 for Addition: \nEnter 2 for Subtraction:  \nEnter 3 for Multiplication:  \nEnter 4 for Division:  \nEnter 5 for Power :  \nEnter 6 for Prime:  \nEnter 7 for Odd or Even operations: \nEnter 8 to Exit: \n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                add();
                break;

            case 2:
                sub();
                break;

            case 3:
                mul();
                break;

            case 4:
                div();
                break;

            case 5:
                pow();
                break;

            case 6:
               prime();
                break;

            case 7:
                OddorEven();
                break;

            case 8:
                printf("exit");
                break;

            default:
                    printf("please choose an operation between 1 - 8\n");
                    break;

            }
        }




}

//function for addition
void add(){
    int result, num1, num2;
    printf("\t\t\t\tWelcome to Addition Operations\n");
    printf("\n\t Addition of two numbers\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = num1 + num2;

    printf("The sum of  %d  and %d is %d\n\n", num1, num2, result);

}

//function for subtraction
void sub(){
    int result, num1, num2;
    printf("\t\t\t\tWelcome to Subtraction Operations\n");
    printf("\n\t Subtraction of two numbers\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = num1 - num2;
    printf("%d subtracted by %d is %d\n\n", num1, num2, result);

}

//function for Multiplication

void mul(){
    int result, num1, num2;
    printf("\t\t\t\tWelcome to Multiplication Operations\n");
    printf("\n\t Multiply two numbers\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = num1 * num2;
    printf("%d  multiplied by %d is %d\n\n", num1, num2, result);

}


//function for Division
void div(){
    int result, num1, num2;
    printf("\t\t\t\tWelcome to Division Operations\n");
    printf("\n\t Division of two numbers\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = num1 / num2;
    printf("%d  divided by %d is %d\n\n", num1, num2, result);

}

//function for power
void pow(){
    int num1, num2, exp, result = 1;
    printf("\t\t\t\tWelcome to Power Operations\n");
    printf("\n\t Power of a numbers\n");
    printf("Enter the base number: ");
    scanf("%d", &num1);
    printf("Enter the exponent: ");
    scanf("%d", &num2);

    exp = num2;
    while (num2 != 0) {
        result *= num1;
        --num2;
    }
    printf("%d to the power of %d is %d\n\n", num1, exp, result);
}

//function for prime Number
void prime(){
    int result = 1, num1, i;
    printf("Welcome to Prime Operations");
    printf("\n\t Checking if a number is prime or not\n");
    printf("Enter a number: ");
    scanf("%d", &num1);

     for(i = 2; i <= num1 / 2; i++)
        {
            if(num1% i == 0)
            {
                result = 0;
                break;
            }
        }
     if(result == 1){
            printf("%d is a prime number\n\n", num1);
     }else {
            printf("%d is not a prime number\n\n", num1);
    }

}

//function of even or odd
void OddorEven(){
    int result, num1;
    printf("Welcome to Odd or Even Operations");
    printf("\n\t Checking if a number is Even or Odd\n");
    printf("Enter a number: ");
    scanf("%d", &num1);

    result = num1 % 2;
    if(result > 0){
        printf("%d is an Odd number\n\n", num1);
    } else {
        printf("%d is an Even number\n\n", num1);
    }
}
