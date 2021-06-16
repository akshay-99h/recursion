#include <stdio.h>

int factorial(int);

int main()
{
    int number;
    int answer;
    printf("Enter the number you want to find the factorial of: ");
    scanf("%d",&number);
    answer=factorial(number);
    printf("The factorial of %d is %d.\n", number, answer);
    return 0;
}

int factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}