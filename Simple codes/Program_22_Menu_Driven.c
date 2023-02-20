#include<stdio.h>
#include<stdlib.h>

int factorial(int x);
int prime(int x);
int OddorEven(int x);
int main(){
    int choice, num, fact, prime_check, evenodd;
    printf("Please Choose Operation:\n");
    printf("Enter 1 for factorial operations: \nEnter 2 for prime Operations: \nEnter 3 for Odd or Even operations \nEnter 4 to Exit program\n");
    scanf("%d", &choice);

    if(choice ==  1){
        printf("\t\t\t\tWelcome to Factorial Operations\n");
        printf("\n\t Calculating Factorial of a number\n");
        printf("Enter a number: ");
        scanf("%d", &num);

         fact = factorial(num);
         printf("The Factorial for %d is %d\n", num, fact);

    } else if (choice == 2 ){
        printf("Welcome to Prime Operations");
        printf("\n\t Checking if a number is prime or not\n");
        printf("Enter a number: ");
        scanf("%d", &num);

        prime_check = prime(num);
        if(prime_check == 1){
            printf("%d is a prime number", num);
        }else {
            printf("%d is not a prime number", num);
        }

    } else if (choice == 3){
        printf("Welcome to Odd or Even Operations");
        printf("\n\t Checking if a number is Even or Odd\n");
        printf("Enter a number: ");
        scanf("%d", &num);
        evenodd = OddorEven(num);

        if(evenodd > 0){
            printf("%d is an Odd number", num);
        } else {
            printf("%d is an Even number", num);
        }

    } else if (choice == 4){
        printf("You have to choosen to Exit the program");
        exit;
    } else {
        printf("Invalid Choice");
    }

}

//function for factorial
int factorial(int x){
    int fact = 1;

    while (x>0)
    {
        fact = fact * x;
        x--;
    }
    return fact;
}

//function for prime Number
int prime(int x){
    int i, pri = 1;
     for(i = 2; i <= x / 2; i++)
        {
            if(x % i == 0)
            {
                pri = 0;
                break;
            }
        }
    return pri;
}

//function of even or odd
int OddorEven (int x){
    x = x % 2;
    return x;
}
